int findMaxConsecutiveOnes(int* a, int n) {
    int count =0;
    int max=0;

    for(int i=0;i<n;i++){
        if (a[i]==1){
            count++;
        }
        else if(a[i]==0){
            count=0;
        }
        if(count>=max){
            max=count;
        }
    }
    return max;
}