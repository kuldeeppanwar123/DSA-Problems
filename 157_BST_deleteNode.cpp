TreeNode* deleteNode(TreeNode* root, int key) {
        TreeNode*curr = root;
        if(root==NULL)
        return NULL;

        if(curr->val==key)
        return deletion(curr);

        while(curr!=NULL){
            if(curr->val > key){
                if(curr->left!=NULL && curr->left->val==key){
                    curr->left = deletion(curr->left);
                    break;
                }
                else
                    curr = curr->left;
            }
            else{
                if(curr->right!=NULL && curr->right->val==key){
                    curr->right = deletion(curr->right);
                    break;
                }
                else
                    curr = curr->right;
            }
        }
        return root;
    }

    TreeNode* deletion(TreeNode*root){
        if(root->left==NULL)
         return root->right;
        
        else if(root->right==NULL)
         return root->left;

         TreeNode*rightNode = root->right;
         TreeNode*leftRightMost = root->left;

         while(leftRightMost->right!=NULL)
         leftRightMost = leftRightMost->right;

         leftRightMost->right = rightNode;

         return root->left;
    }
