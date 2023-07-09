int n,dp[100000][2];
int solve(int idx,int has_stock,vector<int> &prices){
    if(idx==n) return 0;
    int ans1 = 0,ans2 = 0;
    if(dp[idx][has_stock]!=-1) return dp[idx][has_stock];
    if(has_stock){
        ans1 = prices[idx] + solve(idx+1,0,prices);
        ans2 = solve(idx+1,1,prices);
    }
    else{
        ans1 = -prices[idx] + solve(idx+1,1,prices);
        ans2 = solve(idx+1,0,prices);
    }
    return dp[idx][has_stock] =  max(ans2,ans1);
}
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        n = prices.size();
        memset(dp,-1,sizeof(dp));
        return solve(0,0,prices);   
    }
};
