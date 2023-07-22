int dp[5001][5][4];
int mod = 1e9+7;
int dx[8] = {0,0,0,0,2,2,-2,-2};
int dy[8] = {1,-1,1,-1,-1,1,-1,1};
int solve(int k,int i,int j){
    if(i<0 || j<0 || i>=4 || j>=3 || (i==3 && (j==0 || j==2))) return 0;
    if(k==1) return 1;
    if(dp[k][i][j]!=-1) return dp[k][i][j];
    int a= solve(k-1,i+1,j-2)%mod;
    a=(a+solve(k-1,i+1,j+2))%mod;
    a=(a+solve(k-1,i+2,j-1))%mod;
    a=(a+solve(k-1,i+2,j+1))%mod;
    a=(a+solve(k-1,i-1,j-2))%mod;
    a=(a+solve(k-1,i-1,j+2))%mod;
    a=(a+solve(k-1,i-2,j-1))%mod;
    a=(a+solve(k-1,i-2,j+1))%mod;
    return dp[k][i][j] = a;
}
class Solution {
public:
    int knightDialer(int n) {
        if(n==1) return 10;
        mod = 1e9+7;
        int ans =  0;
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<4;i++){
            for(int j=0;j<3;j++){
                ans = (ans%mod + solve(n,i,j)%mod)%mod;
            }
        }
        return ans;
    }
};
