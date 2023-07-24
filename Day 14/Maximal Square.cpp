/*
at each index we check if it can be the staring corner of a square of not 
so we compare the min from its right ,diag, down boxes to determine whiether it forms a square or not and store the min possible square for a particular index
for examplle 1 dp table looks like:
[1,0,1,0,0]
[1,0,1,2,1]
[1,1,1,1,1]
[1,0,0,1,0]
we get 2 as the right and down and diag are 1 and min is 1 that means a square of len 2 can be formed at (1,3) at starting corner so we mark dp[1][3] = 2;
*/
int dp[302][302],n,m,res;
void solve(vector<vector<char>>& matrix){
    for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>=0;j--){
            if(matrix[i][j]=='0') dp[i][j] = 0;
            else{
                int right = dp[i][j+1];
                int diagonal = dp[i+1][j+1];
                int down = dp[i+1][j];
                int ans = 1 + min({right,down,diagonal});
                res = max(res,ans);
                dp[i][j] = ans;
            }
        }
    }
}
class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        memset(dp,0,sizeof(dp));   
        res = 0;
        n = matrix.size(),m = matrix[0].size();
        solve(matrix);
        return res*res;
    }
};
