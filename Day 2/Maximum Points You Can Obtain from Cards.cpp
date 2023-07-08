class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int total = 0,n = cardPoints.size();
        for(auto i:cardPoints) total+=i;
        int ans =  INT_MIN,i=0;
        if(k==n) return total;
        for(int j=0;j<n;j++){
            total-=cardPoints[j];
            if(j-i+1==n-k){
                ans = max(ans,total);
                //here we consider window of size n-k as the remaining window of size k that can be formed using ends or remmoving them 
                //i++ this is done bcoz lets say we have arr = 1 to 6 and k = 2 then when we reach window form idx 1to 4 i.e 1 2 3 4 we hould get ans as arr[1]+arr[6] so as we substract i at beginning, but when we reach window size we have to add and increment i so as to include bothto of the ends while considering middle windows 
                total+=cardPoints[i++];
            }
        }
        return ans;
    }
};
