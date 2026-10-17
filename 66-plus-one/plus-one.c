/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* a, int n, int* returnSize) {

   for(int i=n-1;i>=0;i--){
    if(a[i]<9){
        a[i]++;
        *returnSize = n;
        return a;
    }
    a[i]=0;
   } 
    int *result = malloc((n+1)*sizeof(int));
    result[0]=1;

    for (int i = 1; i <= n; i++) {
        result[i] = 0;
    }

    *returnSize = n + 1;
    return result;
}
