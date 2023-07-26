/*
at each level of the matrix lets consider it as an histogram
while moving to next level of the matrix increment if its1 and find largest area of rectangle usign stack method
repeat this till the last level
*/
int solve(vector<int> &hist){
    int n = hist.size();
    vector<int> lmin(n,0),rmin(n,0);
    stack<int> a,b;
    for(int i=0;i<n;i++){
        while(!a.empty() && hist[a.top()]>=hist[i]){
            a.pop();
        }
        if(a.empty()) lmin[i] = -1;
        else lmin[i] = a.top();
        a.push(i);
    }
    for(int i=n-1;i>=0;i--){
        while(!b.empty() && hist[b.top()]>=hist[i]){
            b.pop();
        }
        if(b.empty()) rmin[i] = n;
        else rmin[i] = b.top();
        b.push(i);
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        ans = max(ans,(rmin[i]-lmin[i]-1)*hist[i]);
    }
    return ans;
}
class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size(),m = matrix[0].size();
        vector<int> hist(m,0);
        int res = INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]=='0') hist[j] = 0;
                else hist[j]++;
            }
            int ans = solve(hist);
            res = max(res,ans);
        }
        return res;
    }
};
