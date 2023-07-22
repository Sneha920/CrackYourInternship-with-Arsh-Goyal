int dp[201][201],m,n;
int solve(int i,int j,vector<vector<int>>& grid){
    if(i==m-1 && j==n-1) return grid[i][j];
    if(i>=m || j>=n) return 1e9;
    if(dp[i][j]!=-1) return dp[i][j];
    int up = grid[i][j] + solve(i,j+1,grid);
    int down  = grid[i][j] + solve(i+1,j,grid);
    return dp[i][j]= min(up,down);
}
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        m = grid.size(),n = grid[0].size();
        memset(dp,-1,sizeof(dp));
        return solve(0,0,grid);
    }
};
