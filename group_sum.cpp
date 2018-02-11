// namespace std have been included for this problem.

// Add any helper functions(if needed) above.
bool group_sum(int arr[], int size, int target)
{
    if(target==0)
        return true;
    if(size== 0)
        return false;
        
    if(arr[size-1] <= target)
    {
        if(group_sum(arr,size-1,target-arr[size-1]))
            return true;
        if(group_sum(arr,size-1,target))
            return true;
        return false;
    }
    
    else
    {
        if(group_sum(arr,size-1,target))
            return true;
        return false;
    }
    
   
    
}