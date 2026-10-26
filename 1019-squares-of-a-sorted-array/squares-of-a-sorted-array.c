/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* a, int n, int* returnSize) {

    int * result=malloc(n*sizeof(int));

    int i=0;
    int j=n-1;
    int k=n-1;

    
    while(i<=j){
        int left=a[i]*a[i];
        int right=a[j]*a[j];

        if(left>right){
            result[k]=left;
            i++;
        }
        else{
            result[k]=right;
            j--;
        }
        k--;
        
    }
    *returnSize=n;
    return result;
}
