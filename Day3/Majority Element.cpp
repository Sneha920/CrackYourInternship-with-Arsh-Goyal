class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0,n = 0;
        for(auto num:nums){
            if(cnt==0){
                n = num;
            }    
            if(n==num){
                cnt++;
            }
            else cnt--;
        }
        return n;
    }
};
