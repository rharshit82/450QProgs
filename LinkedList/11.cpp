Node* findIntersection(Node* head1, Node* head2)
{
    Node* res=nullptr;
    Node* temp=nullptr;
    Node* temp1=head1;
    Node* temp2= head2;
    while(temp1&&temp2){
        if(temp1->data==temp2->data){
            Node* tempNode= new Node(temp1->data);
            if(res) {
                temp->next=tempNode;
                temp=tempNode;
            }
            else{
                res=tempNode;
                temp=res;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        else{
            if(temp1->data>temp2->data){
                temp2=temp2->next;
            }
            else{
                temp1=temp1->next;
            }
        }
    }
    return res;
}