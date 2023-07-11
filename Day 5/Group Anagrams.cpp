
//METHOD 1
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size(),cnt =  0;
        vector<pair<pair<string,string>,int>> v;
        unordered_map<string,int> mp;
        for(auto i:strs){
            string s = i;
            sort(s.begin(),s.end());
            if(mp.find(s)==mp.end()){
                cnt++;
                mp[s] = cnt;
                v.push_back({{s,i},cnt});
            }
            else{
                int idx = mp[s];
                v.push_back({{s,i},idx});
            }
        }
        int k = v.size();
        vector<vector<string>> ans(cnt);
        for(int i=0;i<v.size();i++){
            ans[v[i].second-1].push_back(v[i].first.second);
        }
        
        return ans;
    }
};


//METHOD 2
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size(),cnt =  0;
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> mp;
        for(auto i:strs){
            string tmp = i;
            sort(tmp.begin(),tmp.end());
            mp[tmp].push_back(i);
        }
        for(auto i:mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};
