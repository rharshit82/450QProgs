int intersectPoint(Node* head1, Node* head2)
{
    int c1=0,c2=0;
    Node* temp1=head1;
    Node* temp2=head2;
    while(temp1){
        c1++;
        temp1=temp1->next;
    }
    while(temp2){
        c2++;
        temp2=temp2->next;
    }
    temp1=head1;
    temp2=head2;
    int diff=abs(c2-c1);
    if(c1>c2){
        while(diff--){
            temp1=temp1->next;
        }
    }
    else{
        while(diff--) temp2=temp2->next;
    }
    while(temp1 && temp2){
        if(temp1==temp2) return temp1->data;
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return -1;
}