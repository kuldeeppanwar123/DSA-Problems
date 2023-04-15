int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode* , long long>>q;
        if(root!=NULL)
        q.push({root,0});
        int finalWidth = 0;

        while(!q.empty()){
            int first = q.front().second;
            int last = q.back().second;
            int width = last-first+1;
            finalWidth = max(finalWidth , width);
            int size = q.size();
            for(int i=0; i<size; i++){
                auto x = q.front();
                q.pop();
                TreeNode*node = x.first;
                int index = x.second-first;

                if(node->left!=NULL)
                q.push({node->left , 2*index+1});

                if(node->right!=NULL)
                q.push({node->right , 2*index+2});
            }
        }
        return finalWidth;
    }
