// namespace std have been included for this problem.

// Add any helper functions(if needed) above.
listNode* insert_at_position( listNode* head, int data,int pos)
{
    
    if(head== nullptr)
        return head;
        
    int cnt=1;
    listNode* p=head;
    listNode* q= nullptr;
    while(cnt< pos)
    {
        q=p;
        p=p->next;
        cnt+=1;
    }
    listNode* t1 = new listNode();
    t1->value = data;
    t1->next = p;
    
    if(q==nullptr && p==nullptr)
        return nullptr;
    else if(!q && p)
        {
            head=t1;
        }
    else
        q->next=t1;
    
    return head;
    

    
}