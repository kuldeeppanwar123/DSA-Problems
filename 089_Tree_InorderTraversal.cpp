class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    void inoderHelper(Node*root , vector<int>&ans){
        if(root!=NULL){
            inoderHelper(root->left,ans);
            ans.push_back(root->data);
            inoderHelper(root->right,ans);
        }
    }
    vector<int> inOrder(Node* root) {
        vector<int>ans;
        inoderHelper(root,ans);
        return ans;
    }
};
