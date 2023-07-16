class Solution {
public:
    int strStr(string haystack, string needle) {
        vector<int> idx;
        int n = haystack.size(),m = needle.size();
        for(int i=0;i<n;i++){
            if(haystack[i]==needle[0]) idx.push_back(i);
        }
        for(auto id:idx){
            int i=0,j=id;
            while(j<n && i<m && haystack[j]==needle[i]){
                i++;
                j++;
            }
            if(i==m) return id;
        }
        return -1;
    }
};
