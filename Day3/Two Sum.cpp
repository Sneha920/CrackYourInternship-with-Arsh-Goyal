//1method:
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //sort(nums.begin(),nums.end());
        int p1 =0,n= nums.size(),p2 =n-1;
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        vector<int> v1;
        while(p1<p2){
            cout<<v[p1].first<<' '<<v[p2].first<<endl;
            if(v[p1].first+v[p2].first==target){
                v1.push_back(v[p1].second);
                v1.push_back(v[p2].second);
                break;
            }
            else if(v[p1].first+v[p2].first<target) p1++;
            else p2--;
        }
        return v1;
    }
};

//2nd method
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int p1 =0,n= nums.size(),p2 =n-1;
        unordered_map<int,int> mp;
        vector<int> v;
        for(int i=0;i<n;i++){
            int remaining = target-nums[i];
            if(mp.find(remaining)!=mp.end()){
                v.push_back(mp[remaining]);
                v.push_back(i);
                break;
            }
            mp[nums[i]] = i;
        }
        return v;
    }
};
