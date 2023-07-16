class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans = 0;
        int mini = INT_MAX;
        for(auto i:nums) mini = min(mini,i);
        for(auto i:nums) ans+=(i-mini);
        return ans;
    }
};
