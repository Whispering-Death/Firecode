// namespace std have been included for this problem.

// Add any helper functions(if needed) above.
vector<Interval> insert_range(vector<Interval> intervals_list, Interval insert) 
{
    //sort(intervals_list.begin(), intervals_list.end());
    vector<Interval> ans;
 //   vector<int> marked(intervals_list.size());
    //fill(begin(marked),end(marked),0);
    auto it = intervals_list.begin();
    for(;it!= intervals_list.end();++it)
    {
        if((*it).end < insert.start)
        {
            ans.push_back(*it);
        }
        
        else if(insert.end< (*it).start)
            break;
        else
        {
            insert.start= min((*it).start, insert.start);
            
            insert.end= max((*it).end, insert.end);
            
        }
    }
    
    ans.push_back(insert);
    
    while(it!= intervals_list.end())
        {
            ans.push_back(*it);
            ++it;
            
        }
    
 
   
    
    return ans;
}