/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* a, int n, int* returnSize) {
    int *result=malloc(n*sizeof(int));

   int left=1;
   for(int i=0;i<n;i++){
    result[i]=left;
    left*=a[i];
   }
   int right=1;
   for(int i=n-1;i>=0;i--){
    result[i]*=right;
    right*=a[i];
   }

    *returnSize=n;
    return result;

}