vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int , map<int,multiset<int>>>m;
        queue<pair<TreeNode* , pair<int,int>>>q;
       if(root!=NULL){
           q.push({root,{0,0}});
       }

        while(!q.empty()){
            pair<TreeNode* , pair<int,int>> p = q.front();
            q.pop();
            TreeNode*node = p.first;
            int x = p.second.first;
            int y = p.second.second;
            m[x][y].insert(node->val);

            if(node->left!=NULL){
                q.push({node->left , {x-1, y+1}});
            }
            if(node->right!=NULL){
                q.push({node->right , {x+1, y+1}});
            }
        }
        vector<vector<int>>ans;
        for(auto p:m){
            vector<int>column;
            for(auto q: p.second){
                column.insert(column.end(), q.second.begin() , q.second.end());
            }
            ans.push_back(column);
        }
        return ans;
    }
