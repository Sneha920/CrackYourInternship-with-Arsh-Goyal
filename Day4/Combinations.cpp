int n,k;
vector<vector<int>> ans;
void solve(int idx,vector<int> &v){
    if(v.size()==k){
        ans.push_back(v);
        return;
    }
    for(int i=idx;i<=n;i++){
        v.push_back(i);
        solve(i+1,v);
        v.pop_back();
    }
    return;
}
class Solution {
public:
    vector<vector<int>> combine(int N, int K) {
        k = K;
        n = N;
        ans.clear();
        vector<int> v;
        solve(1,v);
        return ans;
    }
};
