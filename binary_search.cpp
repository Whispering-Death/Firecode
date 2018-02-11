// namespace std have been included for this problem.

// Add any helper functions(if needed) above

bool search(int arr[], int l, int r,int n)
{
   if(l> r)
   return false;
   
   int mid =(l+r)/2;
   
   if(arr[mid]> n)
        return search(arr,l,mid-1,n);

    else if(arr[mid]< n)
        return search(arr,mid+1,r,n);
    
    else
        return true;
   
    
   
}
bool binary_search(int arr[], int size, int n)
{
    // Add your code below this line. Do not modify any other code.                   
    return search(arr,0,size,n);
    // Add your code above this line. Do not modify any other code.
}