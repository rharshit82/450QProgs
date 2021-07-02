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
