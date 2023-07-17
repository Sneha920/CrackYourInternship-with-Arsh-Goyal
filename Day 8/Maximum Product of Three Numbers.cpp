class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size(),m = 1e9+7;
        int maxi = max(((nums[n-1]%m*nums[n-2]%m)%m*nums[n-3]%m)%m,((nums[1]%m*nums[0]%m)%m*nums[n-1]%m)%m);
        return maxi;
    }
};
