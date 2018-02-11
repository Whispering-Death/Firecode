// namespace std have been included for this problem.

// Add any helper functions(if needed) above.
listNode* delete_at_pos(listNode* head, int n)
{
    
    if(head== nullptr || n<=0)
        return head;
        
    int cnt=0;
    
    listNode* p = head;
    listNode* q = nullptr;
        
    if(n==1)
    {
        head=head->next;
        return head;
    }
    
    for(int i=0;i<n-1;++i)
    {
        q=p;
        if(p==nullptr)
            return head;
        
        p=p->next;
        
        
    }
    q->next=p->next;
    return head;

    
}