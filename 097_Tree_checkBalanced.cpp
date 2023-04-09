int getHeight(TreeNode*root){
    if(root==NULL)
     return 0;

     int leftHeight = getHeight(root->left);
     int rightHeight = getHeight(root->right);

     return max(leftHeight , rightHeight)+1;
}

    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        int left = getHeight(root->left);
        int right = getHeight(root->right);
      
        if(abs(left-right)>1)return false;

       bool leftCheck = isBalanced(root->left);
       bool rightCheck =  isBalanced(root->right);

       return (leftCheck && rightCheck);
    }
