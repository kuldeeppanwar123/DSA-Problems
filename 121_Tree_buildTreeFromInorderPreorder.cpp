class Solution {
    map<int,int>inorderMap;
public:
    TreeNode*Build(vector<int>& preorder, vector<int>& inorder,int preFirst , int preEnd ,int inFirst ,int inEnd){   
     if(preEnd<preFirst || inEnd<inFirst) 
       return NULL;
     TreeNode*node = new TreeNode(preorder[preFirst]);
     int inMid = inorderMap[node->val];
     int preMid = preFirst+(inMid-inFirst);
     node->left = Build(preorder , inorder ,preFirst+1, preMid, inFirst , inMid-1);
     node->right = Build(preorder , inorder ,preMid+1, preEnd, inMid+1 , inEnd) ;
       return node; 
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i=0; i<inorder.size(); i++)
        inorderMap.insert({inorder[i] , i});
        return Build(preorder,inorder , 0,preorder.size()-1,0,inorder.size()-1);
    }
};
