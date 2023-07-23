int n,k;
int solve(vector<int> &prices, int idx,int has_stock,int cnt,vector<vector<vector<int>>>& dp){
    if(idx>=prices.size() || cnt>=2) return 0;
    if(dp[idx][has_stock][cnt]!=-1) return dp[idx][has_stock][cnt];
    int take = 0, dont_take = 0;
    if(has_stock){
        take = prices[idx] + solve(prices,idx+1,0,cnt+1,dp);
        dont_take = solve(prices,idx+1,1,cnt,dp);
    }
    else{
        take = -prices[idx] + solve(prices,idx+1,1,cnt,dp);
        dont_take = solve(prices,idx+1,0,cnt,dp);
    }
    return dp[idx][has_stock][cnt]= max(take,dont_take);
}
class Solution {
public:
    int maxProfit(int K, vector<int>& prices) {
        n = prices.size();
        k =K;
        vector<vector<vector<int>>> dp(n,vector<vector<int>> (2,vector<int>(k+1,-1)));
        return solve(prices,0,0,0,dp);
    }
};
