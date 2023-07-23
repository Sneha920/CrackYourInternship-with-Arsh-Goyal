int n,m,dp[1001][1001];
int solve(int i,int j,vector<int>& nums1, vector<int>& nums2){
    if(i>=n || j>=m) return 0;
    int ans = 0;
    if(dp[i][j]!=-1) return dp[i][j];
    if(nums1[i]==nums2[j]){
        ans = 1 + solve(i+1,j+1,nums1,nums2);
    }
    return dp[i][j] = ans;
} 
class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        n = nums1.size(),m = nums2.size();
        memset(dp,-1,sizeof(dp));
        int res = INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                res = max(res,solve(i,j,nums1,nums2));
            }
        }
         return res;
    }
};
