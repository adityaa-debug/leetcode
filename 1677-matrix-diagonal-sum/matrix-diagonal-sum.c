int diagonalSum(int** a, int rows, int* cols) {
    int sum =0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols[i];j++){
            if (i==j){
                sum+=a[i][j];
            }
            else if(i+j==rows-1){
                sum+=a[i][j];
            }
        } 

    }return sum;
    
}