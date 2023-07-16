class Solution {
public:
    string reverseWords(string s) {
        string res = "";
        int i=s.size()-1;
        while(i>=0){
            while(i>=0 && s[i]==' ') i--;
            string str = "";
            while(i>=0 && s[i]!=' '){
                str+=s[i];
                i--;
            }
            reverse(str.begin(),str.end());
            if(str.length()>0) res+=str;
            if(i>0)
            res+=' ';
        }
        int n =  res.length(),j=n-1;
        while(res[j]==' '){
            j--;
        }
        return res.substr(0,j+1);
    }
};
