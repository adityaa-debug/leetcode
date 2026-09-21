/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
    int* searchRange(int* a, int n, int tar, int* returnSize) {
        int *result=malloc(2* 4);
            *returnSize=2;
             result[0]= -1;
             result[1]=-1;
        
    
    int low=0;
    int high =n-1;
    
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]==tar){
            result[0]=mid;
            high= mid -1;
        }
        else if(a[mid]<tar){
            low=mid+1;
        }
        else{
            high=mid-1;
        }

    }
     low=0;
     high =n-1;
     while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]==tar){
            result[1]=mid;
            low=mid+1;
        }
        else if(a[mid]<tar){
            low=mid+1;
        }
        else{
            high=mid-1;
        }

    }
    
    return result;
     
     
     
}
