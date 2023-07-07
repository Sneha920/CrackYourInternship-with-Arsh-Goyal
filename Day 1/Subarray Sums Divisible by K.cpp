class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int sum = 0,ans = 0;
        vector<int> v(k);
        v[0] = 1;
        for(auto i:nums){
            sum = (sum + i%k + k)%k;//k is added to handle negative numbers as we are having a vector only for k indices as the remainders.
            ans+=v[sum];
            //if we encounter the remainder for the first time then its 0
            //even if we encounter for second time that means for 0+num = num ; ie we encountered a 0 in btw which caused the sum to occur again so we increment its count
            v[sum]++;
        }
        return ans;
    }
};
