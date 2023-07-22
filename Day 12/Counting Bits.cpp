class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        ans[0] = 0;
        for(int i = 1;i<=n;i++){
            ans[i]  = ans[i/2]+i%2;
        }
        return ans;
    }
};
// The logic Behind "Why for even numbers the number of set bits would be same as its half and for odd numbers it would be +1" ??.

// 1.All odd numbers would have their LSB (the rightmost bit) set. The reason being that no bit other than 0th bit will contribute an addition of odd number; all other powers of 2 will add to even.
// example: (3 -> 0011) (5 -> 0101) (7 -> 0111). So when we do a right shift >> 1 (divide by 2), we will always lose the rightmost bit. So in order to compensate for the lost bit, we add 1.

// 2.For similar reasons, we see that even numbers would never have LSB set. Example. (2 -> 0010), (4 -> 0100), (6 -> 0110). Even when we right shift >> 1 (divide by 2), we see that there would be no loss of set bits. So we do not need to add 1.
