ListNode* middleNode(ListNode* head) {
        int count=0;
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast){
            ++count;
            fast=fast->next;
            if(count%2==0){
                slow=slow->next;
            }
        }
        return slow;
    }