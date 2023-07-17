class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int> mp;
        while(mp.find(n)==mp.end()){
            int ans = 0,num = n;
            mp[n]++;
            while(num!=0){
                int dig = num%10;
                num/=10;
                ans = ans + (dig*dig);
            }
            cout<<ans<<endl;
            n = ans;
        }
        if(n==1) return true;
        return false;
    }
};
