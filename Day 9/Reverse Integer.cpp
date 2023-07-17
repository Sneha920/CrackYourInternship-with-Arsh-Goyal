class Solution {
public:
    int reverse(int x) {
        bool flag = false;
        if(x<0){
            flag = true;
            x=abs(x);
        }
        long long num = 0;
        while(x!=0){
            int dig = x%10;
            num  = num*10+dig;
            if(num>INT_MAX || num<INT_MIN) return 0;
            x/=10;
        }
        if(flag) return num*-1;
        return num;
    }
};
