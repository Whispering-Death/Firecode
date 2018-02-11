// namespace std have been included for this problem.

// Add any helper functions(if needed) above.
int make_change(int coins[], int n, int amount)
{
  
   
    //dp[0]=1;
    if(amount<= 0)
        return 0;
    vector<int> dp(amount+1);
    fill(begin(dp),end(dp),0);
    dp[0]=1;
    for(int i=0;i<n;++i)
    {
        //dp[coins[i]]=1;
        for(int j= coins[i];j<=amount;++j)
        {
            dp[j]+= dp[j-coins[i]];
        }
       
    }
    return dp[amount];
  
}