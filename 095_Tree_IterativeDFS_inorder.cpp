vector<int> inorderTraversal(TreeNode* root) {
     vector<int>ans;
     stack<TreeNode*>st;
     TreeNode*temp = root;

     while(true){
         if(temp!=NULL){
             st.push(temp);
             temp = temp->left;
         }
         else{
             if(st.empty())break;
             temp = st.top();
             st.pop();
             ans.push_back(temp->val);
             temp = temp->right;
         }

     }
     return ans;

    }
