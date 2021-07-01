void removeLoop(Node* head)
    {
        Node* slow=head;
        Node* fast=head;
        while(slow && fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) break;
        }
        if(slow!=fast) return;
        slow=head;
        while(fast->next!=slow->next){
            slow=slow->next;
            fast=fast->next;
        }
        fast->next=nullptr;
    }