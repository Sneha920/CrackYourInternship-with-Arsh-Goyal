//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

bool check(vector<int>&s,vector<int>&p){
        for(int i=0;i<26;i++){
            if(p[i]>s[i])
                return 0;
        }
        return 1;
}
class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
       // Your code here
        vector<int>countS(26,0);
        vector<int>countP(26,0);
        for(int i=0;i<p.size();i++)
        countP[p[i]-'a']++;
        
        int j=0;
        int mini=INT_MAX;
        string ans="";
        for(int i=0;i<s.size();i++){
            countS[s[i]-'a']++;
            
           if(!check(countS,countP))
           continue;
            if(i-j+1<mini){
                mini=i-j+1;
                ans=s.substr(j,mini);
            }
            while(check(countS,countP)){
                 if(i-j+1<mini){
                    mini=i-j+1;
                    ans=s.substr(j,mini);
                }
                countS[s[j]-'a']--;
                j++;
            }
        }
        return ans.size()==0?"-1":ans;
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string pat;
        cin>>pat;
        Solution obj;
        cout<<obj.smallestWindow(s, pat)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends
