// namespace std have been included for this problem.

// Add any helper functions(if needed) above.


void kthNode(treeNode* root, vector<treeNode*>& nodeList)
{
    if(root== nullptr)
        return;
   
    
    kthNode(root->left,nodeList);
    nodeList.push_back(root);
    kthNode(root->right, nodeList);
    
}
treeNode* find_kth_smallest(treeNode* root, int k)
{
    vector<treeNode*> nodeList;
    kthNode(root,nodeList);
    
    if(k<=nodeList.size())
    {
        return nodeList[k-1];
    }
    else
        return nullptr;
    
}