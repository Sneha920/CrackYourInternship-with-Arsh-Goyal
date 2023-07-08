class Solution {
public:
    void sortColors(vector<int>& nums) {
        //idea is send all 0s to beginning  and 2s to ending
        //lets keep track of low and high for positions of 0 and 2 
        int low = 0,high = nums.size()-1,i=0;
        while(i<=high){
            if(nums[i]==1) i++;
            else if(nums[i]==0){
                swap(nums[i],nums[low]);
                low++;
                i++;
            }
            else if(nums[i]==2){
                swap(nums[i],nums[high]);
                high--;
            }
        }
    }
};
