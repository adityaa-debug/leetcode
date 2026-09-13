/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* a, int n, int* returnSize) {
    int *result=malloc(n * sizeof(int));
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        result[i]=sum;
    }
    *returnSize=n;
    return result;

     


}