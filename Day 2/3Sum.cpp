class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>> s;
        for(int i=0;i<n-2;i++){
            if(nums[i]>0) break;
            if(i>0 && nums[i]==nums[i-1]) continue;
            //as we already commputed vectors for that value
            int p1 = i+1,p2 = n-1;
            while(p1<p2){
                vector<int> v;
                if(nums[i]+nums[p2]+nums[p1]==0){
                    v.push_back(nums[i]);
                    v.push_back(nums[p1]);
                    v.push_back(nums[p2]);
                    s.insert(v);
                    // int last_low_occurence = nums[p1],last_high_occurence = nums[p2];
                    // while(p1<p2 && nums[p1]==last_low_occurence) p1++;
                    // while(p1<p2 && nums[p1]==last_high_occurence) p2--;
                    p1++;
                }
                else if(nums[i]+nums[p2]+nums[p1]<0){
                    p1++;
                }
                else p2--;
            }
        }
        vector<vector<int>> v(s.begin(),s.end());
        return v;
    }
};
