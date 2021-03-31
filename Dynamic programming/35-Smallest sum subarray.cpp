int minSubarraySum(int arr[], int n){
    for(int i=0;i<n;i++) arr[i]*=-1;
    int max_sum=-10000001,max_sum1=0;
    for(int i=0;i<n;i++)
    {
        max_sum1+=arr[i];
        if(max_sum<max_sum1) max_sum=max_sum1;
        if(max_sum1<0) max_sum1=0;
    }
    return (-1*max_sum);
}