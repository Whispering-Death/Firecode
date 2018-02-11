// namespace std have been included for this problem.

// Add any helper functions(if needed) above.
map<char,string> m1;
  
vector<string> getSolution(string digits, vector<string> result,int pos)
{
    if(pos>= digits.size())
        return result;
        
    string value = m1[digits[pos]];
    vector<string> temp;
    for(int i=0;i<value.length();++i)
    {
        char cur = value[i];
        if(result.size()> 0)
        {
            for(int j=0;j<result.size();++j)
            {
                temp.push_back(result[j]+string(1,cur));
            } 
        }
        else
            temp.push_back(string(1,cur));
       
    }
    return getSolution(digits,temp,pos+1);
    
}
  
vector<string> get_strings_from_nums(string digits) 
{
  
    m1['2']="abc";
    m1['3']="def";
    m1['4']="ghi";
    m1['5']="jkl";
    m1['6']="mno";
    m1['7']="pqrs";
    m1['8']="tuv";
    m1['9']="wxyz";
    vector<string> result;
    
    return getSolution(digits,result,0);
    
    
}