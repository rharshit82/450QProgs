Node * removeDuplicates( Node *head) 
    {
        Node* curr=head;
     unordered_set<int> arr;
     while(curr->next!=nullptr){
         arr.insert(curr->data);
         if(arr.find(curr->next->data)!=arr.end()){
             curr->next=curr->next->next;
         }
         else curr=curr->next;
         
     }
     return head;
    }