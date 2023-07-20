/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
ListNode *reverse(ListNode *head){
    ListNode *prev = NULL,*curr;
    while(head!=NULL){
        ListNode *tmp = head->next;
        head->next = prev;
        prev = head;
        head = tmp;
    }
    return prev;
}
class Solution {
public:
    int getDecimalValue(ListNode* tmp) {
        int num = 0,a = 1;
        ListNode *head = reverse(tmp);
        while(head!=NULL){
            int val = head->val;
            if(val==1){
                num = num + a;
            }
            a = a*2;
            head = head->next;
        }
        return num;
    }
};
