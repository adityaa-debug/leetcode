int maxProfit(int* a, int n) {
    int min=a[0];
    int maxprofit=0;

    for(int i=1;i<n;i++){
        int profit=a[i]-min;
        if(profit>maxprofit){
            maxprofit=profit;
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    return maxprofit;
}