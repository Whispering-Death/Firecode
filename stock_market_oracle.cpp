// namespace std have been included for this problem.

// Add any helper functions(if needed) above.
int max_profit(int prices[], int sz)
{
    int ans =0;
    
    int j=1;
    int ind =0;
    while(j< sz)
    {
        if(prices[j] > prices[j-1])
        {
            ++j;
        }
        else
        {
            ans+=prices[j-1] - prices[ind];
            ind=j;
            ++j;
        }
    }
    if(prices[sz-1]-prices[ind] > 0)
        ans+= (prices[sz-1]- prices[ind]);
    
    return ans;
    
}