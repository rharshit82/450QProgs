#Recursive
vector<int> output;
void printLeftView(Node* root, int level, int* maxLevel){
    if(!root) return;
    if(level>*maxLevel){
        *maxLevel=level;
        output.push_back(root->data);
    }
    printLeftView(root->left,level+1,maxLevel);
    printLeftView(root->right,level+1,maxLevel);
}
vector<int> leftView(Node *root)
{
    output.clear();
    int maxLevel=0;
    printLeftView(root,1,&maxLevel);
    return output;
}


#Iterative
vector<int> leftView(Node *root)
{
    vector<int> result;
    if(!root) return result;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        int count=q.size();
        for(int i=0;i<count;i++){
            Node* temp=q.front();
            q.pop();
            if(i==0) result.push_back(temp->data);
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }
    return result;
}
