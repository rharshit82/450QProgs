It is just Inorder traversal. In the middle, instead of printing, we joined.
If prev == null, we have reached the leftest node. we make is head and return is later.
We join nodes in the else part.

Node* prev=nullptr;
    Node * bToDLL(Node *root)
    {
        if(root==nullptr) return root;
        Node* head= bToDLL(root->left);
        if(prev==nullptr) head=root;
        else{
            root->left=prev;
            prev->right=root;
        }
        prev=root;
        bToDLL(root->right);
        return head;
    }
