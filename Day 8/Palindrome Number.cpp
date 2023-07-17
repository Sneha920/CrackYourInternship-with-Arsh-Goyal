class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        string s;
        s = to_string(x);
        int p1 = 0,p2 = s.length()-1;
        while(p1<=p2){
            if(s[p1]!=s[p2]) return false;
            else{
                p1++;
                p2--;
            }
        }
        return true;
    }
};
