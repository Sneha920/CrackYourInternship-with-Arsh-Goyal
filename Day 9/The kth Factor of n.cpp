class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> a,b;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                a.push_back(i);
                if(i*i!=n) b.push_back(n/i); 
            }
        }
        reverse(b.begin(),b.end());
        for(auto i:a) cout<<i<<' ';
        cout<<endl;
        for(auto i:b) cout<<i<<' ';
        cout<<endl;
        int n1 = a.size(),m1 =  b.size();
        if(k==n1) return a[n1-1];
        if(k> m1+n1) return -1;
        else if(k<n1) return a[k-1];
        return b[k-n1-1];
    }
};
