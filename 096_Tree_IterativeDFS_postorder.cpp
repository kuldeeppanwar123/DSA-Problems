vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*>st;
         vector<int>ans;

        if(root!=NULL)
          st.push(root);

         while(!st.empty()){
             TreeNode*node = st.top();
             st.pop();
             ans.push_back(node->val);
             if(node->left!=NULL)
              st.push(node->left);
             if(node->right!=NULL)
               st.push(node->right);
         }
         reverse(ans.begin(), ans.end());
         return ans;
    }
