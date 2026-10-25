int countNegatives(int** a, int n, int* col) {
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<col[i];j++){
            if(a[i][j]<0){
                count++;
            }
        }
    }
    return count;
}