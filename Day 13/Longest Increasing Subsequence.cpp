int n;
int solve(int idx,int prev_idx,vector<int> &nums,vector<vector<int>> &dp){
    if(idx>=n) return 0;
    if(dp[idx][prev_idx+1]!=-1) return dp[idx][prev_idx+1];
    int take = 0,nottake = 0;
    if(prev_idx==-1 || nums[prev_idx] < nums[idx])
        take = 1 + solve(idx+1,idx,nums,dp);
    nottake = 0+ solve(idx+1,prev_idx,nums,dp);
    return dp[idx][prev_idx+1] = max(take,nottake);
}
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        n = nums.size(); 
        vector<vector<int>> dp(n,vector<int> (n+1,-1));
        return solve(0,-1,nums,dp);
    }
};
