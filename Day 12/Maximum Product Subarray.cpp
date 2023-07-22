class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size(),maxi = nums[0],mini = nums[0],x = nums[0],ans = nums[0];
        for(int i=1;i<n;i++){
            x = nums[i];
            if(x<0) swap(maxi,mini);
            maxi = max(x,maxi*x);
            mini = min(x,mini*x);
            ans = max(ans,maxi);
        }
        return ans;
    }
};
