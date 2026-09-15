int findNumbers(int* a, int n) {
int count=0;
    for(int i=0;i<n;i++){

        int nums=a[i] ;
        int digits = 0;

    
        while(nums>0){
            nums=nums/10;
            digits++;
        }
        if(digits%2==0){
            count++;
        }
      
    }
        return count;
        
}
    

 
     
    
