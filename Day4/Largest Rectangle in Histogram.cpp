class Solution {
public:
    int largestRectangleArea(vector<int>& height) {
        int ans = 0;
        int p1 = 0,n = height.size();
        vector<int> lmin(n,0),rmin(n,0);
        stack<int> l,r;
        for(int i=0;i<n;i++){
            while(!l.empty() && height[l.top()]>=height[i]){
                l.pop();
            }
            if(l.empty()) lmin[i] = -1;    
            else lmin[i] = l.top();
            l.push(i);
        }
        
        for(int i=n-1;i>=0;i--){
            while(!r.empty() && height[r.top()]>=height[i]){
                r.pop();
            }
            if(r.empty()) rmin[i] = n;
            else rmin[i] = r.top();
            r.push(i);
        }
        for(int i=0;i<n;i++){
            ans = max(ans,(rmin[i]-lmin[i]-1)*height[i]);
        }
        return ans;
    }
};
 
