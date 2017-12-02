ListNode* reverse(ListNode*first,ListNode*last)
    { 
        ListNode* prev = last;
        while(first != last){
            ListNode* next= first->next;
            first->next=prev;
            prev= first;
            first = next;
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        ListNode* current = head;
        for( int i =0; i<k; i++)
        {
            if(current==NULL)
            return head;
            current = current->next;
        }
        ListNode* curHead=reverse(head,current);
        head->next= reverseKGroup(current, k);
        return curHead;
    }