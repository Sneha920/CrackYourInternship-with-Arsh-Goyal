//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

int n,m;
int dp[1001][1001];
int solve(int i,int j,string &nums1,string &nums2){
    if(i>=n || j>=m) return 0;
    int ans = 0;
    if(dp[i][j]!=-1) return dp[i][j];
    if(nums1[i]==nums2[j]){
        ans = 1 + solve(i+1,j+1,nums1,nums2);
    }
    return dp[i][j] = ans;
} 
class Solution{
    public:
    int longestCommonSubstr (string S1, string S2, int N, int M)
    {
        n = N,m = M;
        memset(dp,-1,sizeof(dp));
        int res = INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                res = max(res,solve(i,j,S1,S2));
            }
        }
        return res;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends
