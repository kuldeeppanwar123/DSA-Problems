int getHeight(TreeNode*root){
        if(root==NULL)
        return 0;

        int leftHeight = getHeight(root->left);
        int rightHeight = getHeight(root->right);

        return max(leftHeight , rightHeight)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        queue<TreeNode*>q;
        int maxDm = 0;
        q.push(root);
        while(!q.empty()){
            TreeNode*node = q.front();
            q.pop();
            if(node->left!=NULL)
              q.push(node->left);

            if(node->right!=NULL)
              q.push(node->right);

            int leftheight = getHeight(node->left);
            int rightheight = getHeight(node->right);

            int currDm =  leftheight+rightheight;
            maxDm = max(maxDm , currDm);
        }
          
        return maxDm;
    }
