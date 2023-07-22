//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends

int dp[1000001];
int solve(int n,int a,int b,int c){
    if(n<0) return INT_MIN;
    if(n==0) return 0;
    if(dp[n]!=-1) return dp[n];
    int x = 1 + solve(n-a,a,b,c);
    int y = 1 + solve(n-b,a,b,c);
    int z = 1 + solve(n-c,a,b,c);
    return dp[n] = max(x,max(y,z));
}
class Solution
{
    public:
    //Function to find the maximum number of cuts.
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        memset(dp,-1,sizeof(dp));
        if(solve(n,x,y,z)<0) return 0;
        return solve(n,x,y,z);
    }
};

//{ Driver Code Starts.
int main() {
    
    //taking testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking length of line segment
        int n;
        cin >> n;
        
        //taking types of segments
        int x,y,z;
        cin>>x>>y>>z;
        Solution obj;
        //calling function maximizeTheCuts()
        cout<<obj.maximizeTheCuts(n,x,y,z)<<endl;

    }

	return 0;
}
// } Driver Code Ends
