class Solution {
public:
    int minInsertions(string s) {
        string s2 = s;
        reverse(s.begin(),s.end());
        int m = s.length(),n = s2.length();
        vector<vector<int>> dp(m+1,vector<int>(n+1,0));
        for(int i=0;i<=m;i++){
            dp[i][0] = 0;
        }
        for(int i=0;i<=n;i++){
            dp[0][i] = 0;
        }
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(s[i-1]==s2[j-1]){
                    dp[i][j] = 1+dp[i-1][j-1];
                }
                else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return m-dp[m][n];
    }
};
