RandomListNode *copyRandomList(RandomListNode *head) {
        if( head==NULL)
        return NULL;
        RandomListNode *head2,*list1,*list2;
        list1= head;
        while(list1)
        {
            list2 = new RandomListNode(list1->label);
            list2->next= list1->next;
            list1->next = list2;
            list1 = list1->next->next;
        }
        head2= head->next;
        list1= head;
        while(list1)
        {
            if(list1->random)
            {
                list1->next->random = list1->random->next;
                
            }
            list1 = list1->next->next;
        }
        for(list1= head ; list1!=NULL; list1=list1->next)
        {
            list2= list1->next;
            list1->next = list2->next;
            if(list2->next)
            list2->next = list2->next->next;
        }
        return head2;
       
        
    }