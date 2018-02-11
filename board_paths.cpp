// namespace std have been included for this problem.

// Add any helper functions(if needed) above.
int count_paths(int rows, int cols)
{
    int dp[rows][cols];
    
    for(int i=0;i<rows;++i)
    {
        for(int j=0;j<cols;++j)
        {
            if(i==0 || j==0)
                dp[i][j]=1;
            
            else
                dp[i][j]= dp[i-1][j]+dp[i][j-1];
        }
    }
    return dp[rows-1][cols-1];
}