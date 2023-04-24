class Solution {
    map<int , int>parentMap;
public:
   TreeNode* build(vector<int>& inorder, vector<int>& postorder,int inStart , int inEnd, int postStart , int postEnd){
       if(inStart>inEnd)return NULL;
       TreeNode*node = new TreeNode(postorder[postEnd]);
       int inMid = parentMap[node->val];
       int postMid = postStart+(inMid-inStart)-1;

       node->left = build(inorder , postorder , inStart , inMid-1, postStart , postMid);
       node->right = build(inorder , postorder , inMid+1, inEnd, postMid+1 , postEnd-1);

       return node;
   }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int size = inorder.size();
        for(int i=0; i<size; i++)
        parentMap[inorder[i]] = i;
        TreeNode*root = build(inorder , postorder , 0,size-1,0,size-1);
        return root;
    }
};
