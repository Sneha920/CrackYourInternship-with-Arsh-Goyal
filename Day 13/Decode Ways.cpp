int n,dp[101];
int solve(int idx,string &s){
    if(idx>=n) return 1;
    if(dp[idx]!=-1) return dp[idx];
    int ans = 0;
    if(s[idx]!='0'){
        ans += solve(idx+1,s);
    }
    if(idx+1<n && ((s[idx]=='2' && s[idx+1]<='6') || s[idx]=='1')){
        ans += solve(idx+2,s);
    }
    return dp[idx] = ans;
}
class Solution {
public:
    int numDecodings(string s) {
        n = s.length();
        memset(dp,-1,sizeof(dp));
        return solve(0,s);
    }
};
