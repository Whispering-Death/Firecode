// namespace std have been included for this problem.

// Add any helper functions(if needed) above.
#define mp make_pair
#include <map>
#include <limits.h>
int find_max_sum_level(treeNode* root)
{
    if(root==nullptr)
        return -1;
        
    //int n = height(root);
    //vector<int> v(n);
    map<int,int> m1;
    queue<pair<treeNode*,int>> q1;
    q1.push(mp(root,0));
    int sum = INT_MIN;
    int level=0;
    
    while(!q1.empty())
    {
        auto x = q1.front();
        q1.pop();
        treeNode* curNode = x.first;
        int curLevel = x.second;
        
        if(m1.find(curLevel) == m1.end())
            m1[curLevel]= curNode->value;
        else
            m1[curLevel]+= curNode->value;
        if(curNode->left)
            q1.push(mp(curNode->left,curLevel+1));
        if(curNode->right)
            q1.push(mp(curNode->right, curLevel+1));
    }
    
    for(auto ele: m1)
    {
       // cout<<ele.first<<" : "<<ele.second<<endl;
        if(ele.second > sum)
        {
            sum=ele.second;
            level= ele.first;
        }
    }
    return level;
}