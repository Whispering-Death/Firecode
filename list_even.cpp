// namespace std have been included for this problem.

// Add any helper functions(if needed) above.
bool is_list_even(listNode* head)
{
    
    int cnt =0;
    
    listNode*p =head;
    
    while(p!= nullptr)
    {
        ++cnt;
        p=p->next;
    }
    return cnt%2==0;
    
}