// namespace std have been included for this problem.

// Add any helper functions(if needed) above.
#include<unordered_set>
bool is_anagram(string input1, string input2)
{
    unordered_set<char> s1;
    
    for(char c: input1)
        s1.insert(c);
        
    for(char c : input2)
    {
        if(s1.find(c) == s1.end())
            return false;
    }
    return true;
}