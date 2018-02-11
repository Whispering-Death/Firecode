/ namespace std have been included for this problem.

// Add any helper functions(if needed) above.
#include<queue>
vector<int> level_order(treeNode* root)
{
    vector<int> v;
    
    queue<treeNode*> q;
    if(!root)
        return v;
        
    q.push(root);
    
    while(!q.empty())
    {
        treeNode* t = q.front();
        q.pop();
        v.push_back(t->value);
        
        if(t->left)
            q.push(t->left);
        if(t->right)
            q.push(t->right);
    }
    
    return v;
    
}