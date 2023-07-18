bool findPair(int arr[], int n, int k){
    sort(arr,arr+n);
    int p1 = 0,p2 = 1;
    while(p1<n && p2<n){
        if(p1!=p2 && arr[p2]-arr[p1]==k) return true;
        else if(arr[p2]-arr[p1]<k) p2++;
        else p1++;
    }
    return false;
}
