class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        vector<int> ans;
        stack<int> st;
        int n = a.size();
        for(int i=0;i<n;i++){
            if(st.empty() || a[i]>0) st.push(a[i]);
            else{
                while(!st.empty() && st.top()>0 && st.top()<abs(a[i])){
                    st.pop();
                }
                if(!st.empty() && st.top()==abs(a[i])) st.pop();
                else if(st.empty() || st.top()<0){
                    st.push(a[i]);
                }
                
            }
        }
        while(!st.empty()){
            int ele = st.top();
            st.pop();
            ans.push_back(ele);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
