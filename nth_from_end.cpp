// namespace std have been included for this problem.

// Add any helper functions(if needed) above.
listNode* find_n_node_from_end(listNode* head, int n)
{
    
    listNode* p =head;
    listNode* q =head;
    
    if(head== nullptr)
        return nullptr;
        
    int cnt=0;
    if(n< 0)
        return nullptr;
        
   for(int i=0;i<n;++i)
   {
       if(!p)
        return nullptr;
        
        p=p->next;
   }
    
    
    while(p!= nullptr)
    {
        q=q->next;
        p=p->next;
    }
    
    return q;
    
}