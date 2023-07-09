int dp[100000];
int n;
bool solve(int idx,vector<int> &nums){
    if(idx>=nums.size()-1) return true;
    if(dp[idx]!=-1) return dp[idx];
    if(nums[idx]==0) return false;
    int jump = nums[idx]+idx;
    for(int i=idx+1;i<=jump;i++){
        if(i<n && solve(i,nums)) return dp[idx] =  true;
    }
    return dp[idx] = false;
    
}
class Solution {
public:
    bool canJump(vector<int>& nums) {
        n = nums.size();
        memset(dp,-1,sizeof(dp));
        return solve(0,nums);
    }
};
