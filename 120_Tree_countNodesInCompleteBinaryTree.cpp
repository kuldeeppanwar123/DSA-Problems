// first approach.
int countNodes(TreeNode* root) {
        if(root==NULL)
        return 0;

        int leftNodes = countNodes(root->left);
        int rightNodes = countNodes(root->right);

        return leftNodes+rightNodes+1;
    }





//second approach
class Solution {
public:
    int getLeftHeight(TreeNode*root){
        int count = 0;
        TreeNode*node = root;

        while(node!=NULL){
            count++;
            node = node->left;
        }
        return count;
    }

    int getRightHeight(TreeNode*root){
        int count = 0;
        TreeNode*node = root;

        while(node!=NULL){
            count++;;
            node = node->right;
        }
        return count;
    }
    
    int countNodes(TreeNode* root) {
        if(root==NULL)return 0;
        
        int leftHeight = getLeftHeight(root);
        int rightHeight = getRightHeight(root);

        if(leftHeight==rightHeight)
//         return (pow(2,leftHeight)-1);
           return 1<<leftHeight-1;

        return 1+countNodes(root->left)+countNodes(root->right);
    }
};
