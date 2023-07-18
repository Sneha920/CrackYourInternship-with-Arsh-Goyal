//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
        vector<long long int> a(n),b(n),ans(n);       
        a[0] = nums[0];
        long long m = 1e9+7;
        b[n-1] = nums[n-1];
        for(int i=1;i<n;i++){
            a[i] = (nums[i]*a[i-1]);
        }
        for(int i=n-2;i>=0;i--){
            b[i] = (nums[i]*b[i+1]);
        }
        if(n==1)return {1};
        else if(n==2)
        {
           reverse(nums.begin(),nums.end());
           return nums;
        }
        ans[0] = b[1];
        ans[n-1] = a[n-2];
        for(int i=1;i<n-1;i++){
            ans[i] = (a[i-1]*b[i+1]);
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends
