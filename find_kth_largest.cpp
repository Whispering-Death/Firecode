/ namespace std have been included for this problem.

// Add any helper functions(if needed) above.


int size(treeNode* root)
{
    if(root==nullptr)
        return 0;
    else
        return size(root->left)+1+size(root->right);
}
treeNode* getSolution(treeNode* root, int k)
{
    if(root== nullptr)
        return root;
        
    if(size(root->right)== k-1)
        return root;
    else if(k < size(root->right))
        return getSolution(root->right,k);
    else
        return getSolution(root->left, k-size(root->left));
}
treeNode* find_kth_largest(treeNode* root, int k) 
{
    return getSolution(root,k);
    
}