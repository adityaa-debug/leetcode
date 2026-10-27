int maxSubArray(int* a, int n) {
    int sum=0;
    int maxsum=a[0];

    for(int i=0;i<n;i++){
        sum+=a[i];

        if(sum>maxsum)
            maxsum=sum;
        if(sum<0)
            sum=0;
    }
    return maxsum;
}