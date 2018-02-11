// namespace std have been included for this problem.

// Add any helper functions(if needed) above.
double power(double x, int n)
{
    if(n== 0)
        return 1;
    if(n==1)
        return x;
    if(n < 0)
        return power(1/x, -n);
    
        
    if(n%2 == 0)
        return power(x, n/2)* power(x,n/2);
    
    else
        return x*power(x,n-1);
    
    
    
}