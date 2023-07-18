class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int n = arr.size(),r = n-1;
        for(;r>0 && arr[r]>=arr[r-1];r--);
        int ans = r;
        cout<<r<<endl;
        for(int l=0;l<r && (l==0 || arr[l-1]<=arr[l]);l++){
            while(r<n && arr[r]<arr[l]) r++;
            ans =min(r-l-1,ans);
        }
        return ans;
    }
};

// we can break this problem into the following subproblems:

// Find the longest non-decreasing continuous subarray starting from the left.
// Find the longest subarray ending at the right.
// Make the longest non-decreasing sequence from the left and right array.
