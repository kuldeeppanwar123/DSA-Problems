    int getHeight(TreeNode*root, int &maxDm){
        if(root==NULL)
        return 0;

        int leftHeight = getHeight(root->left,maxDm);
        int rightHeight = getHeight(root->right,maxDm);
        maxDm = max(maxDm , leftHeight+rightHeight);

        return max(leftHeight , rightHeight)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxDm =0;
        getHeight(root , maxDm);
        return maxDm;
    }
