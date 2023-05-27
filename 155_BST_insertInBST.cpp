// Recursive approach
TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL){
            TreeNode*node = new TreeNode(val);
            return node;
        }
        else if(root->val > val){
            root->left = insertIntoBST(root->left , val);
            return root;
        }
        else{
            root->right = insertIntoBST(root->right , val);
            return root;
        }
    }

// iterative approach
Node* insert(Node* root, int key) {
     Node*node = new Node(key);
     if(root==NULL)
     return node;
     
     Node*curr = root;
     while(true){
          if(curr->data < key){
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
