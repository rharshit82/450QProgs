struct Node* temp=head;
    while(temp){
        temp=temp->next;
        if(temp==head) return 1;
    }
    return 0;