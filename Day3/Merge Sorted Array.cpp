class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m+n-1,p1 = m-1,p2 = n-1;
        if(m==0){
            for(int i=0;i<m+n;i++) nums1[i] = nums2[i];
        }
        else if(n==0) return;
        while(p1>=0 && p2>=0){
            cout<<nums1[p1]<<' '<<nums2[p2]<<endl;
            if(nums1[p1]<=nums2[p2]){
                nums1[i] = nums2[p2];
                i--;
                p2--;
            }
            else{
                nums1[i] =  nums1[p1];
                p1--;
                i--;
            }
            //cout<<nums[i]<<endl;
        }
        while(p2>=0 && i>=0) {
            nums1[i] = nums2[p2];
            p2--;
            i--;
        }
    }
};
