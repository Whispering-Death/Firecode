// namespace std have been included for this problem.

// Add any helper functions(if needed) above.


treeNode* lca(treeNode* root, int a,int b)
{
    
    if(root== nullptr)
        return root;
    if(root->value==a || root->value==b)
        return root;
    
    treeNode*l = lca(root->left,a,b);
    treeNode* r = lca(root->right,a,b);
    
    if(l && r)
        return root;
    
    return (l==nullptr)? r:l; 
  
    
}
treeNode* find_lca(treeNode* root, int a, int b)
{
  return lca(root,a,b);
    
}