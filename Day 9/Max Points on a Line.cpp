class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n = points.size();
        if(n==1) return 1;
        int ans = 1;
        for(int i=1;i<n;i++){
            unordered_map<double,int> mp;
            for(int j=0;j<n;j++){
                if(i!=j){
                    int y = points[j][1] - points[i][1];
                    int x = points[j][0] - points[i][0];
                    mp[atan2(y,x)]++;
                }
                for(auto [x,cnt]:mp){
                    ans = max(ans,cnt+1);
                }
            }
        }
        return ans;
    }
};
