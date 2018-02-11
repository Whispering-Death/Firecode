// namespace std have been included for this problem.

// Add any helper functions(if needed) above.
vector<Interval> merge_intervals(vector<Interval> intervals_list)
{
    vector<Interval> v;
    if(intervals_list.empty())
        return v;
    sort(intervals_list.begin(), intervals_list.end(), [](Interval a, Interval b){ return a.start < b.start;});
  
    
    
    v.push_back(intervals_list[0]);
    
    for(int i=1;i<intervals_list.size();++i)
    {
        if(v.back().end >= intervals_list[i].start)
        {
            v.back().end= max(intervals_list[i].end,v.back().end);
        }
        
        else
        {
            v.push_back(intervals_list[i]);
        }
    }
    
    
    
    return v;
    
}