// namespace std have been included for this problem.

// Add any helper functions(if needed) above.
char first_non_repeating(string str)
{
    map<char,int> m1;
    
    for(char c:str)
        m1[c]++;
        
    for(int i=0;i<str.length();++i)
    {
        if(m1[str[i]]== 1)
            return str[i];
    }
    return '0';
}