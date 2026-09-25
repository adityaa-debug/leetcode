int removeDuplicates(int* a, int n) {
    int k=1;
    for(int i=0;i<n;i++){
        if(a[i]!=a[k-1]){
            a[k]=a[i];
            k++;
        }
    }
    return k;
    
}