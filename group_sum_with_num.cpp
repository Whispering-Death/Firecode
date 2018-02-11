// namespace std have been included for this problem.

// Add any helper functions(if needed) above.
bool group_sum_with_num(int arr[], int sz, int must_have, int target_sum)
{
    if(sz==0)
    {
        if(target_sum==0)
            return true;
        else
            return false;
    }
    
    if(arr[sz]== must_have)
    {
        if(target_sum < must_have)
            return false;
        else
            return group_sum_with_num(arr,sz-1,must_have,target_sum-must_have);
        
    }
    else
    {
        if(arr[sz] <= target_sum)
            return group_sum_with_num(arr,sz-1,must_have,target_sum-arr[sz]) || group_sum_with_num(arr,sz-1,must_have,target_sum);
        else
            return group_sum_with_num(arr,sz-1,must_have,target_sum);
            
    }
}