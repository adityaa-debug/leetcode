int removeDuplicates(int* a, int n) {
    int j=1;
    for(int i =0;i<n-1;i++){
        if (a[i+1]!=a[i]){
            a[j]=a[i+1];
            j++;
        }
    }
    return j;
}