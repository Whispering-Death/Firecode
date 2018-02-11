// namespace std have been included for this problem.

// Add any helper functions(if needed) above.
vector<vector<int>> generate_pascal_triangle(int num_rows) 
{
    vector<vector<int>> v;
    
    /*
    for(int i=1;i<=num_rows;++i)

    {
        int val=1;
        vector<int> v1;
        for(int j=1;j<=i;++j)
        {
            v1.push_back(val);
            val = val*(i-j)/j;
            
        }
        v.push_back(v1);
    }    
    */
    
    if(num_rows<=0)
        return v;
        
    vector<int> prev;
    prev.push_back(1);
    v.push_back(prev);
    for(int i=2;i<=num_rows;++i)
    {
        vector<int> cur;
        cur.push_back(1);
        for(int j=0;j<prev.size()-1;++j)
        {
            cur.push_back(prev.at(j)+prev.at(j+1));
        }
        cur.push_back(1);
        v.push_back(cur);
        prev=cur;
    }
    return v;
}