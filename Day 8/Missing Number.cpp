class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size(),ans1=0;
        //if(n==1 && nums[0]!=0) return 0;
        for(int i=0;i<n;i++){
            ans1^=i;
            ans1^=nums[i];
        }
        return ans1^n;
    }
};
