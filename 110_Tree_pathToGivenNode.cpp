bool getPath(TreeNode*node , int val , vector<int>&ans){
    if(node==NULL)return false;
    
    ans.push_back(node->val);
    
    if(node->val==val)
      return true;
     
    
    ans.push_back(node->val);
    
    bool left =  getPath(node->left , val , ans);
    if(left) return true;
    bool right =  getPath(node->right, val , ans);
    if(right) return true;
    
    ans.pop_back(); 
    return false; 
}
vector<int> Solution::solve(TreeNode* A, int B) {
    vector<int>ans;
    getPath(A ,B, ans);
    return ans;
}
