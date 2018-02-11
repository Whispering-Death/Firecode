// namespace std have been included for this problem.

// Add any helper functions(if needed) above.
listNode* find_middle_node(listNode* head)

{
    

    if(head== nullptr)
        return nullptr;
        
    listNode* slow = head;
    listNode* fast = head;
    
    while(fast!= nullptr && fast->next!=nullptr)
    {
      
        fast=fast->next->next;
        if(fast== nullptr)
            return slow;
        slow=slow->next;
    }
    
    return slow;
    
}