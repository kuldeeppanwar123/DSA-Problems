// Recursive approach
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL)return NULL;
        int curr = root->val;

        if(curr>p->val && curr >q->val)
        return lowestCommonAncestor(root->left , p,q);

        if(curr<p->val && curr<q->val)
        return lowestCommonAncestor(root->right , p,q);

        return root;
    }

// iterative approach
Node* LCA(Node *root, int n1, int n2)
{
  while(root!=NULL){
            if(root->data > p && root->data > q)
            root = root->left;
          
            else if(root->data < p && root->data < q)
            root = root->right;

            else 
            break;
        }
        return root;
}
