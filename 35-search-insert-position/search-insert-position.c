int searchInsert(int* a, int n, int tar) {
    for(int i=0;i<n;i++){
        if(a[i]>=tar)
        return i;
       
    }
    return n;
    
}