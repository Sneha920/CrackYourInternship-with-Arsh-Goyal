int n,m,dp[301][301];
void solve(vector<vector<int>>& matrix){
    for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>=0;j--){
            if(matrix[i][j]==0) dp[i][j] = 0;
            else{
                int right = dp[i][j+1];
                int down = dp[i+1][j];
                int diagonal  = dp[i+1][j+1];
                int ans = 1 + min({right,down,diagonal});
                dp[i][j] = ans;
            }
        }
    }
}
class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        memset(dp,0,sizeof(dp));
        n =matrix.size(),m = matrix[0].size();
        solve(matrix);
        int ans = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans  += dp[i][j];
            }
        }
        return ans;
    }
};
