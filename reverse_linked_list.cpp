// namespace std have been included for this problem.

// Add any helper functions(if needed) above.
listNode* reverse_list(listNode* head)
{
    
    listNode*p = head;
    listNode* q = nullptr;
    listNode* r;
    while(p!= nullptr)
    {
       
        r=p->next;
        p->next=q;
        q=p;
        p=r;
    }
    
    return q;


    
}