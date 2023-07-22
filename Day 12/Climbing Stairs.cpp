int dp[46],n;
int solve(int idx){
    if(idx==0 || idx==1) return 1;
    //idx = 1 if not written will take 2 steps back and resuls in -1 idx so include it in BC. 
    if(dp[idx]!=-1) return dp[idx];
    return dp[idx] = solve(idx-1)+solve(idx-2);
}
class Solution {
public:
    int climbStairs(int N) {
        n = N;
        memset(dp,-1,sizeof(dp));
        return solve(N);
    }
};
