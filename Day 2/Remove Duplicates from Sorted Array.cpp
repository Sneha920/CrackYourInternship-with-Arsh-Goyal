//Method 1
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ans = 0,prev = 1,i=0,n = nums.size();
        if(n==1) return 1;
        while(i<=n-1 && prev<n){
            int j=prev;
            while(j<n && nums[i]==nums[j]) j++;
            if(j!=n) nums[i+1] = nums[j];
            i++;
            ans++;
            prev = j;
        }
        return ans;
    }
};


//Method 2
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0,n = nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[j]){
                j++;
                nums[j] = nums[i];
            }
        }
        return j+1;
    }
};
