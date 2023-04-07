void preorderHelper(TreeNode*root , vector<int>&ans){
    if(root!=NULL){
        ans.push_back(root->val);
        preorderHelper(root->left , ans);
        preorderHelper(root->right , ans);
    }
}
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        preorderHelper(root, ans);
        return ans;
    }
