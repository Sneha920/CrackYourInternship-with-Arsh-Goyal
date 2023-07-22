class Solution {
    private:
    int countz(string &str)
    {
        int cnt = 0;
        for(auto &it : str)
        {
            if(it == '0')
                cnt++;
        }
        return cnt;
    }
    int counto(string &str)
    {
        int cnt = 0;
        for(auto &it : str)
        {
            if(it == '1')
                cnt++;
        }
        return cnt;
    }
    int fun(int ind,vector<string>& strs,int m,int n,vector<vector<vector<int>>>&dp)
    {
        if(ind >= strs.size() )
            return 0;
        // if(m==0 || n==0)
        //     return 1;
        if(dp[ind][m][n] != -1)
            return dp[ind][m][n];
        int cnt0 = countz(strs[ind]);
        int cnt1 = counto(strs[ind]);
        int pick= INT_MIN;
        if(m>=cnt0 && n>=cnt1)
             pick = 1+fun(ind+1,strs,m-cnt0,n-cnt1,dp);
        int nonpick = 0 + fun(ind+1,strs,m,n,dp);
        return dp[ind][m][n] = max(pick,nonpick);
    }
public:
    int findMaxForm(vector<string>& strs, int m, int n) 
    {
        vector<vector<vector<int>>>dp(strs.size()+1,vector<vector<int>>(m+1,vector<int>(n+1,-1)));
        return fun(0,strs,m,n,dp);
    }
};
