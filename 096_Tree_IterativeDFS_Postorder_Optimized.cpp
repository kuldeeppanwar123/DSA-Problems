vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*>st;
         vector<int>ans;
       TreeNode*curr = root;
        while(curr!=NULL || !st.empty()){
            if(curr!=NULL){
                st.push(curr);
                curr = curr->left;
            }
            else{
                TreeNode*temp = st.top()->right;
                if(temp==NULL){
                   temp  = st.top();
                   st.pop();
                   ans.push_back(temp->val);
                   while(!st.empty() && st.top()->right ==temp){
                       temp = st.top(); 
                       st.pop();
                       ans.push_back(temp->val);
                   }
                }else{
                    curr = temp;
                }
            }
        }
         return ans;
    }
