int dp[13][100001],n;
int solve(int idx,vector<int>& coins, int target){
    if(idx<0 || target<0) return 1e9;
    if(target==0) return 0;
    if(dp[idx][target]!=-1) return dp[idx][target];
    int notpick = solve(idx-1,coins,target);
    int pick = INT_MAX;
    if(target-coins[idx]>=0){
        pick = 1 + solve(idx,coins,target-coins[idx]);
    }
    return dp[idx][target] = min(pick,notpick);
}
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if(amount==0) return 0;
        n = coins.size();
        memset(dp,-1,sizeof(dp));
        if(solve(n-1,coins,amount)==1e9) return -1;
        return solve(n-1,coins,amount);
    }
};
