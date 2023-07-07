class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0],res = 0,n = prices.size();
        for(int i=1;i<n;i++){
            if(prices[i]<mini) mini = prices[i];
            res = max(prices[i] - mini,res);
        }
        return res;
    }
};
