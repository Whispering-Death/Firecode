// namespace std have been included for this problem.

// Add any helper functions(if needed) above.
#define mp make_pair
#include <queue>
bool validate_bst_itr(treeNode* root)
{
    queue<pair<treeNode*,pair<int,int>>> q1;
    q1.push(mp(root,mp(INT_MIN, INT_MAX)));
    
    while(!q1.empty())
    {
        auto p = q1.front();
        q1.pop();
        
        auto lb= p.second.first;
        auto rb= p.second.second;
        auto curval = p.first->value;
        
        if ((curval < lb) || (curval >rb))
            return false;
            
        if(!p.first->left && !p.first->right)
            continue;
        
        if(p.first->left)
        {
            q1.push(mp(p.first->left,mp(lb, curval-1)));
            
        }
        
        if(p.first->right)
        {
            q1.push(mp(p.first->right,mp(curval+1, rb)));
            
        }
        
    }
    
    return true;
    
}