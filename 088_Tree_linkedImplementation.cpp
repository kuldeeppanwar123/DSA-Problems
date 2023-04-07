class Node{
 public:
 int data;
 Node*left;
 Node*right;
 Node(int x){
    data = x;
    left =NULL;
    right = NULL;
 }
};

//preorder
void preorderDisplay(Node*root){
    if(root!=NULL){
        cout<<root->data<<"  ";
        preorderDisplay(root->left);
        preorderDisplay(root->right);
    }
}

int main(){
    Node*root = new Node(12);
    root->left = new Node(8);
    root->right = new Node(12);
    root->left->left = new Node(13);
    root->left->right = new Node(14);
    root->right->right = new Node(19);

    preorderDisplay(root);
    return 0;
}
