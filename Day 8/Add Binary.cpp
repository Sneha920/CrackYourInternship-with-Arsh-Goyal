class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;
        int i = a.length()-1,j = b.length()-1;
        string ans = "";
        while(i>=0 || j>=0 || carry ==1){
            if(i>=0){
                carry += a[i]-'0';
                i--;
            }
            if(j>=0){
                carry += b[j]-'0';
                j--;
            }
            ans += (carry%2+'0');
            carry = carry/2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
