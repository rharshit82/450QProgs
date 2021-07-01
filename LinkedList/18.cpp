 bool isPalindrome(Node *head)
    {
        stack<int> st;
        Node* temp=head;
        while(temp){
            st.push(temp->data);
            temp=temp->next;
        }
        temp=head;
        while(temp){
            int val= st.top();
            st.pop();
            if(val!=temp->data) return false;
            else temp=temp->next;
        }
        return true;
    }