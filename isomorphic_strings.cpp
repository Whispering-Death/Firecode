// namespace std have been included for this problem.

// Add any helper functions(if needed) above.
#include <set>
bool is_isomorphic(string input1, string input2)
{
    set<char> s1;
    
    for(int i=0;i<input1.length();++i)
    {
        if(s1.find(input1[i])== s1.end() && s1.find(input2[i])== s1.end())
        {
            s1.insert(input1[i]);
            s1.insert(input2[i]);
        }
        
        if(s1.find(input1[i])!= s1.end() && s1.find(input2[i])!= s1.end())
            continue;
        else
            return false;
        
        
        
    }
    return true;
    
}