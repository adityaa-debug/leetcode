double findMedianSortedArrays(int* a, int m, int* b, int n) 
{   int p=m+n;
    int c[p];
    for  (int i=0;i<m;i++){
        c[i]=a[i];
    }
    for(int i=0;i<n;i++){
        c[m+i]=b[i];
    }

    for(int i =0;i<p-1;i++){
        for(int j=0;j<p-1;j++){
        if(c[j]>c[j+1]){
        int temp=c[j+1];
        c[j+1]=c[j];
        c[j]=temp;
        }
    }
    }
    double median;
    if(p %2 != 0){
        median=c[p/2];
    }
    else
    {
        median=(c[p/2-1]+c[p/2])/2.0;
    }

return median;
}