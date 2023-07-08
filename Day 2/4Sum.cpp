class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>> s;
        for(int k=0;k<n-3;k++){
            //if(nums[k]>target) break;
            if(k>0 && nums[k]==nums[k-1]) continue;
            for(int i=k+1;i<n-2;i++){
                int p1 = i+1,p2 = n-1;
                while(p1<p2){
                     long long newTarget = (long long)target - (long long)nums[k]-(long long)nums[i]; 
                    if(nums[p1] + nums[p2]==newTarget){
                        s.insert({nums[i],nums[k],nums[p1],nums[p2]});
                        p1++;
                        p2--;
                    }
                    else if(nums[p1] + nums[p2] < newTarget){
                        p1++;
                    }
                    else p2--;
                }
            }
        }
        vector<vector<int>> v(s.begin(),s.end());
        return v;
    }
};
