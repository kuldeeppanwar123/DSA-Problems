// if alrady present ingnore insertion otherwise insert.
Node* insert(Node* root, int key) {
     Node*node = new Node(key);
     if(root==NULL)
     return node;
     
     Node*curr = root;
     while(true){
         if(curr->data == key){
             break;
         }
         else if(curr->data < key){
             if(curr->right!=NULL) curr = curr->right;
             else{
               curr->right = node;
               break;
             }
         }
         else{
             if(curr->left!=NULL) curr = curr->left;
             else{
               curr->left = node;
               break;
             }
         }
     }
     return root;
}
