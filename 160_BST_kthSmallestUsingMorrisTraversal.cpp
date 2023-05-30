// optimized  space O(1)
int kthSmallest(TreeNode* root, int k) {
        int count = 0;
        TreeNode*curr = root;
        int ans =-1;

        while(curr!=NULL){
            if(curr->left==NULL){
                count++;
                if(count==k)
                    ans = curr->val;
                curr = curr->right;
            }
            else{
                TreeNode*leftRightMost = curr->left;
                while(leftRightMost->right!=NULL && leftRightMost->right!=curr)
                leftRightMost = leftRightMost->right;

                if(leftRightMost->right==NULL){
                    leftRightMost->right = curr;
                    curr = curr->left;
                }
                else if(leftRightMost->right==curr){
                    leftRightMost->right = NULL;
                    count++;
                    if(count==k)
                    ans = curr->val;
                    curr = curr->right;
                }
            }
           
        } 
         return ans;
    }
