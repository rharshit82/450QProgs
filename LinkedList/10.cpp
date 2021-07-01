Leetcode one: 
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum,carry=0;
        int digit;
        ListNode* res;
        bool isFirst=true;
        ListNode* temp;
        while(l1!=nullptr || l2!=nullptr || carry!=0){
            sum=0;
            if(l1)
            {
                sum+=l1->val;
                l1=l1->next;
            }
            
            if(l2){

                sum+=l2->val;
                l2=l2->next;
            }
            if(carry) {
                sum+=carry;
                carry=0;
                }
                digit=sum%10;
                carry=+sum/10;
            if(isFirst){
                res= new ListNode(digit); 
                temp=res;
                isFirst=false;
            }
            else{
                temp->next = new ListNode(digit);
                temp=temp->next;
            }
            
        }
        return res;
    }