// namespace std have been included for this problem.

// Add any helper functions(if needed) above.
int max_sum_cont_sequence(int arr[], int sz)
{
    if(sz== 0)
        return 0;
        
    int max_sum=arr[0];
    int cur_sum = arr[0];
    
    for(int i=1;i<sz;++i)
    {
        cur_sum = max(arr[i],cur_sum+arr[i]);
        max_sum=max(max_sum,cur_sum);
    }
    
    return max_sum;
}