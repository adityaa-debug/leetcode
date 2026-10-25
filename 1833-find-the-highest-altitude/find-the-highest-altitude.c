int largestAltitude(int* a, int n) {
    int sum=0;
    int max=0;

for(int i=0;i<n;i++){
    sum+=a[i];
     
    if(sum>max){
        max=sum;
    }
}
return max;
}