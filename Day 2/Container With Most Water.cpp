class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        int p1 = 0,p2 = height.size()-1;
        while(p1<p2){
            if(height[p1]<height[p2]){
                ans = max(ans,height[p1] * (p2-p1));
                p1++;
            }
            else{
                ans = max(ans,height[p2] * (p2-p1));
                //p2-p1 to find the length of the rect with p2 (min) height so as to calulate the area
                p2--;
            }
        }
        return ans;
    }
};
