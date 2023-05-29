TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL)
        return NULL;

        if(root->val==key){
            if(root->left==NULL){
                TreeNode*right = root->right;
                delete root;
                return right;
            }

            else if(root->right==NULL){
                TreeNode*left = root->left;
                delete root;
                return left;
            }
            else{
                TreeNode*rightLeftMost = root->right;
                while(rightLeftMost->left!=NULL)
                    rightLeftMost = rightLeftMost->left;
                swap(root->val , rightLeftMost->val);

            }
        }
        root->left = deleteNode(root->left,key);
        root->right = deleteNode(root->right,key);
        return root;
    }
