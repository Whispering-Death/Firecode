// namespace std have been included for this problem.

// Add any helper functions(if needed) above.
#define mp make_pair
bool validate_bst(treeNode* root)
{
    queue<pair<treeNode* , pair<int,int>>> q1;
    
    q1.push(mp(root,mp(INT_MIN,INT_MAX)));
    
    while(!q1.empty())
    {
        auto ele = q1.front();
        q1.pop();
        auto curNode = ele.first;
        
        if(curNode->value < ele.second.first || curNode->value > ele.second.second)
            return false;
        
        if(curNode->left)
            q1.push(mp(curNode->left,mp(ele.second.first, curNode->value-1)));
        
        if(curNode->right)
            q1.push(mp(curNode->right,mp(curNode->value+1,ele.second.second)));
    }
    return true;
    
}