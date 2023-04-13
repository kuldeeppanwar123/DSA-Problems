    bool check(TreeNode*node1 , TreeNode*node2){
        if(node1==NULL && node2==NULL) return true;
        if((node1==NULL && node2!=NULL) || (node1!=NULL && node2==NULL)) return false;
        if(node1->val!=node2->val) return false;

        bool left = check(node1->left , node2->right);
        bool right = check(node1->right , node2->left);

        return left && right;        
    }


    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        return check(root->left , root->right);
    }
