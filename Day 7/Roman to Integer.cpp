class Solution {
public:
    int romanToInt(string s) {
        int n = s.length()-1;
        unordered_map<char,int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        int i=n,ans = 0;
        char prev=s[n];
        while(i>=0){
            if(mp[prev] > mp[s[i]]){
                ans-=mp[s[i]];
            }
            else if(mp[prev]<=mp[s[i]]){
                ans+=mp[s[i]];
            }
            prev = s[i];
            i--;
        }
        return ans;
    }
};
