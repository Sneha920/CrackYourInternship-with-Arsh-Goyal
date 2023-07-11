bool ispalin(int i,int j,string &s){
    while(i<=j){
        if(s[i]==s[j]){
            i++;
            j--;
        }
        else return false;
    }
    return true;
}
class Solution {
public:
    bool validPalindrome(string s) {
        int p1 = 0,n =s.length(),p2 =  n-1;
        while(p1<=p2){
            if(s[p1]==s[p2]){
                p1++;
                p2--;
            }
            else return ispalin(p1+1,p2,s) || ispalin(p1,p2-1,s);
        }
        return true;
    }
};
