// namespace std have been included for this problem.

// Add any helper functions(if needed) above.
#include<unordered_set>
bool permutation(string input1, string input2)
{
    map<char,int> m1;
    
    for(char c: input1)
    {
        m1[c]++;
    }
    
    for(char c: input2)
    {
        if(m1.find(c)== m1.end())
            return false;
        m1[c]--;
        if(m1[c]< 0)
            return false;
    }
    
    for(auto e: m1)
    {
        if(e.second!=0)
            return false;
    }
    
    return true;
}