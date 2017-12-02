ListNode* reverser(ListNode* head){
	ListNode* cur = head;
	ListNode* prev = NULL;
	while(cur){
	ListNode* next = cur ->next;
	cur->next = prev;
	prev = cur;
	cur = next;
	}
	return prev;
}
ListNode* reverseSecondHAlf(ListNode* head) {
        struct ListNode* fast=head;
	struct ListNode* second_half;
	struct ListNode* slow_prev=head;
	struct ListNode* slow=head;
	struct ListNode* midnode=NULL;
	
	//bool res=true;
	if(head==NULL)
	{
	    return 1;
	}
	if(head!=NULL&&head->next!=NULL)
	{
		
	
	while(fast!=NULL&&fast->next!=NULL)
	{
		fast=fast->next->next;
		slow_prev=slow;
		slow=slow->next;
	}
	if(fast!=NULL)
	{
		midnode=slow;
		slow=slow->next;
	}
	second_half=slow;
	slow_prev->next=reverse(&second_half);
	return head;

}
	
	