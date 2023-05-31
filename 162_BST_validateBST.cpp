// check tree is BST or not.

// approach-1
vector<int>nodes;
    void inorder(Node*root){
        if(root==NULL)return;
        inorder(root->left);
        nodes.push_back(root->data);
        inorder(root->right);
    }
    
    bool isBST(Node* root) 
    {
        inorder(root);
        for(int i=0; i<nodes.size()-1; i++){
            if(nodes[i]>=nodes[i+1])
            return false;
        }
        return true;
    }


// approach-2
bool isValidBST(TreeNode* root , long Min = LLONG_MIN , long Max = LLONG_MAX) {
        if(root==NULL) return true;
        if(root->val<=Min || root->val >=Max) return false;

        bool left = isValidBST(root->left , Min , root->val);
        bool right = isValidBST(root->right , root->val , Max);

        return left && right;
    }
