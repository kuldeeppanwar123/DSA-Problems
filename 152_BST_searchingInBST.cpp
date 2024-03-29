// Recursive approach
TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL)
        return NULL;

        if(root->val==val)
        return root;

        else if(root->val < val)
        return searchBST(root->right , val);
        else
        return searchBST(root->left , val);
    }


// Iterative Approach
TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode*curr = root;
        while(curr!=NULL){
            if(curr->val==val)
            return curr;

            else if(curr->val<val)
            curr = curr->right;
            else
            curr = curr->left;
        }
        return NULL;
    }
