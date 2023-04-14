    bool isLeaf(TreeNode*node){
        return (node->left==NULL && node->right==NULL);
     }

    void getPath(TreeNode*node,string temp, vector<string>&ans){
     int num = node->val;
     if(num<0){
         temp+='-';
     }
     temp+=to_string(abs(num));
     temp+="->";
     if(isLeaf(node)){
         temp.pop_back();
         temp.pop_back();
         ans.push_back(temp);
         return ;
     }
     
     if(node->left!=NULL)getPath(node->left , temp , ans);
     if(node->right!=NULL)getPath(node->right , temp, ans);
     }

    vector<string> binaryTreePaths(TreeNode* root) {
        string temp;
        vector<string>ans;
        getPath(root , temp, ans);
        return ans;
    }
