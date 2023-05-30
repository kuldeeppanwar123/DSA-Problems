int countNodes(Node*root){
        if(root ==NULL)return 0;
        return countNodes(root->left)+countNodes(root->right)+1;
    }
    int kthLargest(Node *root, int K)
    {
        int totalNodes = countNodes(root);
        int k = totalNodes-K+1;
        int count = 0;
        Node*curr = root;
        int ans =-1;

        while(curr!=NULL){
            if(curr->left==NULL){
                count++;
                if(count==k)
                    ans = curr->data;
                curr = curr->right;
            }
            else{
                Node*leftRightMost = curr->left;
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
                    ans = curr->data;
                    curr = curr->right;
                }
            }
           
        } 
         return ans;
    }
