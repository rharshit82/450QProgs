Node* reverse(Node *head){
        Node* prev=nullptr;
        Node* curr=head;
        Node* next=nullptr;
        while(curr!=nullptr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    public:
    Node* addOne(Node *head) 
    {
        Node* res=head;
        head=reverse(head);
        Node* k=head;
        int carry=1,sum=0;
        Node* temp;
        while(head){
            sum=(head->data?head->data:0)+carry;
            carry=(sum>=10)?1:0;
            head->data=sum%10;
            temp=head;
            head=head->next;
        }
        if(carry) {
            temp->next = new Node(carry);
            temp=temp->next;
        }
        res=reverse(k);
        return res;
    }