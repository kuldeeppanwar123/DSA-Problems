int maxPath(TreeNode*root , int&maxi){
        if(root==NULL)
        return 0;

        int leftMax = max(0,maxPath(root->left , maxi));
        int rightMax = max(0,maxPath(root->right , maxi));
        maxi = max(maxi , leftMax+rightMax+root->val);

        return root->val+max(leftMax , rightMax);
    }
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        maxPath(root, maxi);
        return maxi;
    }
