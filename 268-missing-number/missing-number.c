int missingNumber(int* a, int n) {
    int asum=0;
    for(int i=0;i<n;i++){
        asum=asum+a[i];
    }
    int esum=n*(n+1)/2;
    return esum-asum;
}