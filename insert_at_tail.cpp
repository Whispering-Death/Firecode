// namespace std have been included for this problem.

// Add any helper functions(if needed) above.
listNode* insert_at_tail( listNode* head, int data)
{
    listNode*t = new listNode();
    t->value=data;
    t->next = nullptr;
    if(head==nullptr)
        head=t;
    
    else
    {
        listNode*p = head;
        while(p->next!= nullptr)
            p=p->next;
        p->next=t;
        
    }
    
    return head;


    
}