// namespace std have been included for this problem.

// Add any helper functions(if needed) above.

void permute(string s, int l , int r, vector<string>& ans)
{
    if(l==r)
        ans.push_back(s);
    
    else
        {
            for(int j=l;j<r;++j)
            {
                swap(s[l],s[j]);
                permute(s,l+1,r,ans);
                swap(s[l],s[j]);
            }
        }
}
vector<string>  get_permutations(string s) 
{
    vector<string> ans;
    permute(s,0, s.length(),ans);
    return ans;
    