// namespace std have been included for this problem.

// Add any helper functions(if needed) above.
int max_gain(int arr[], int sz)
{
    if(sz< 2)
        return 0;
    
    int val= max(arr[1]-arr[0],0);
    int prev_ind=0;   
    for(int i=1;i<sz;++i)
    {
        if(arr[i]>= arr[prev_ind])
        {
             val=max(val, arr[i]- arr[prev_ind]);
        }
        else
        {
            prev_ind=i;
                
        }
    }
    return val;
    
}