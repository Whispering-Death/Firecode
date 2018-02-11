// namespace std have been included for this problem.

// Add any helper functions(if needed) above.


int findDiameter(treeNode* root, int *height)
{
   
 	int l =0, r =0, diameter =0;       
		if (root != NULL) {
			int ld = findDiameter(root->left, &l);
			int rd = findDiameter(root->right, &r);
			*height = max(l,r) + 1;
			
			int root_d = l + r + 1;
			diameter = max(root_d, max(ld, rd));
		} 
		return diameter;
    
}
int diameter(treeNode* root)
{
    
    int ans=0;
    return findDiameter(root, &ans);
    
}