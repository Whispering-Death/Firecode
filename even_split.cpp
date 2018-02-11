// namespace std have been included for this problem.

// Add any helper functions(if needed) above.

bool split(int arr[],int sz, int target)
{
    if(target== 0)
        return true;
    if(sz==-1)
        return false;
        
    if(target>= arr[sz])
    {
        if(split(arr,sz-1,target-arr[sz]))
            return true;
        else
            return split(arr,sz-1,target);
    }
    
    else
        return split(arr,sz-1,target);
    

}
bool split_array(int arr[], int sz) 
{
    if(sz<=1 )
        return false;
      
    int sum=0;
    
    for(int i=0;i<sz;++i)
    {
        sum+=arr[i];
    }
    if(sum%2 !=0)
        return false;
    return split(arr,sz-1,sum);
    
    
}
