// Recursive 
void inorder(Node* root, vector<int>& ans){
        if(root == NULL) return;
        inorder(root -> left, ans);
        ans.push_back(root -> data);
        inorder(root -> right, ans);
    }
int KthSmallestElement(Node *root, int K) {
        vector<int>ans;
        inorder(root , ans);
        if(ans.size()<K)return -1;
        return ans[K-1];
    }




// Iterative 
int kthSmallest(TreeNode* root, int k) {
        int count=0;
        stack<TreeNode*>st;
        TreeNode*temp = root;
        while(true){
            if(temp!=NULL){
                st.push(temp);
                temp = temp->left;
            }
            else{
                temp = st.top();
                st.pop();
                count++;
                if(count==k)break;
                temp = temp->right;
            }
        }
        return temp->val;
    }
