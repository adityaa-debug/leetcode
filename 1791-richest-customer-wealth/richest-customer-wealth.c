int maximumWealth(int** a, int n, int* m) {
    int max=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m[i];j++){
            sum=sum+a[i][j];
        }
        if(sum>max)
        max=sum;
    }
    return max;
    
}