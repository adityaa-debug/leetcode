/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* a, int n, int* returnSize) {
    int *result=malloc(2 * n * sizeof(int));

    for(int i=0;i<n;i++){
        result[i]=a[i];
        result[i+n]=a[i];
    }
     *returnSize=n*2;
     return result ;
}