struct Node* reverseList(struct Node *head)
    {
        if(head ==nullptr || head->next==nullptr) return head;
        struct Node* rest_head = reverseList(head->next);
        struct Node* rest_tail = head->next;
        rest_tail->next=head;
        head->next=nullptr;
        return rest_head;
    }