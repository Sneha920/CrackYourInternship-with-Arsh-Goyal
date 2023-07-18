class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int low = 0,high = n-1;
        if(low==high) return 0;
        if(nums[low]>nums[low+1]) return low;
        if(nums[high]>nums[high-1]) return high;
        low++;
        high--;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]>nums[mid-1] && nums[mid] > nums[mid+1]) return mid;
            else if(nums[mid-1]>nums[mid]){
                high = mid-1;
            }
            else if(nums[mid+1]>nums[mid]){
                low = mid+1;
            }
        }
        return -1;
    }
};


 
