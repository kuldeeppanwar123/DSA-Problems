vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        int count=0;
        if(root!=NULL)
          q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<int>level(size);
            for(int i=0; i<size; i++){
                TreeNode*temp = q.front();
                q.pop();
                int index = (count%2==0)?i:size-i-1;
                level[index] = temp->val;
                if(temp->left!=NULL)
                  q.push(temp->left);
                if(temp->right!=NULL)
                  q.push(temp->right);
            }
            count++;
            ans.push_back(level);
        }
       
        return ans;
    }
