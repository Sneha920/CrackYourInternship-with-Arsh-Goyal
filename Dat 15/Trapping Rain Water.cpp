class Solution {
public:
    int trap(vector<int>& height) {
        int ans = 0, n = height.size();
        vector<int> left_max(n),right_max(n);
        int maxi = INT_MIN,maxi2=INT_MIN;
        for(int i=0;i<n;i++){
            left_max[i] = max(height[i],maxi);
            maxi = max(height[i],maxi); 
        }
        for(int i=n-1;i>=0;i--){
            right_max[i] = max(height[i],maxi2);
            maxi2 = max(height[i],maxi2);
        }
        // for(int i=0;i<n;i++){
        //     cout<<left_max[i]<<' ';
        // }
        // cout<<endl;
        // for(int i=0;i<n;i++){
        //     cout<<right_max[i]<<' ';
        // }
        for(int i=0;i<n;i++){
            int curr = min(left_max[i],right_max[i])-height[i];
            ans+=curr;
        }
        return ans;
    }
};
