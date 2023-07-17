class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans = "";
        cout<<endl;
        while(columnNumber){
           if(columnNumber%26==0){
               ans+='Z';
               columnNumber--;//as if columnNumber is 26 then dividign it by 26 gives 1 
           }
           else{
               ans +=((columnNumber%26-1)+'A');
           }
            columnNumber/=26;
            cout<<columnNumber<<endl;
        }
        reverse(begin(ans),end(ans));
        
        return ans;
    }
};
