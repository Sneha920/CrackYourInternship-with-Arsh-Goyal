int n;
vector<string> ans;
void solve(int open,int close,int idx,vector<char> s){
    if(idx==n){
        string str="";
        for(auto i:s){
            str+=i;
        }
        ans.push_back(str);
        return;
    }
    if(open<n/2){
        s[idx]='(';
        solve(open+1,close,idx+1,s);
    }
    if(close<open){
        s[idx] = ')';
        solve(open,close+1,idx+1,s);
    }
}
class Solution {
public:
    vector<string> generateParenthesis(int N) {
        ans.clear();
        n = 2*N;
        vector<char> s(n);
        solve(0,0,0,s);
        return ans;
    }
};

    
