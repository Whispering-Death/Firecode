// namespace std have been included for this problem.

// Add any helper functions(if needed) above.
int find_missing_number(int arr[], int n) 
{
   int sum=0;
   for(int i=0;i<n;++i)
   {
       sum+=arr[i];
   }
    n+=1;
    int tot = (n*(n+1))/2;
    return tot-sum;
}