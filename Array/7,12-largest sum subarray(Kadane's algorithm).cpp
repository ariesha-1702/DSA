int maxSubarraySum(int arr[], int n){
    
    // Your code here
    int max_sum=-10000001,max_sum1=0;
    for(int i=0;i<n;i++)
    {
        max_sum1+=arr[i];
        if(max_sum<max_sum1) max_sum=max_sum1;
        if(max_sum1<0) max_sum1=0;
    }
    return max_sum;
}