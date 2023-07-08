class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum =  0,ans = 0,n = nums.size();
        unordered_map<int,int> mp;
        vector<int> prefix_sum(n);
        prefix_sum[0] = nums[0];
        for(int i=1;i<n;i++) prefix_sum[i] =  prefix_sum[i-1]+nums[i];
        for(int i=0;i<n;i++){
            if(prefix_sum[i]==k) ans++;
            if(mp.find(prefix_sum[i]-k)!=mp.end()){
                ans+=mp[prefix_sum[i]-k];
            }
            mp[prefix_sum[i]]++;
        }
        return ans;
    }
};
//here we add mp[prefix[i]-k] as if we encounter a value in map i.e lets say k = 6 for some prefix sum as 12 if we substract 6 we get 6 uf 6 is already present in mp that means this subarray excluding the indx of prefix sum as 6 gives us the subarray of sum 6 so we check for remianing value in map;
