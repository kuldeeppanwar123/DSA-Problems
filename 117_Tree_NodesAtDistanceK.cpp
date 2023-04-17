class Solution {
unordered_map<TreeNode* , TreeNode*>parentMap;
public:
    void markParent(TreeNode*root){
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode*node = q.front();
            q.pop();

            if(node->left!=NULL){
                q.push(node->left);
                parentMap[node->left] = node;
            }
            if(node->right!=NULL){
                q.push(node->right);
                parentMap[node->right] = node;
            }
        }
    }
    
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        markParent(root);
        unordered_map<TreeNode* , bool>visited;
        queue<TreeNode*>q;
        q.push(target);
        visited[target] = true;
        
        for(int i=0; i<k; i++){
            int size = q.size();
            for(int j=0; j<size; j++){
                TreeNode*node = q.front();
                q.pop();

                if(node->left!=NULL && !visited[node->left]){
                    q.push(node->left);
                    visited[node->left] = true;
                }
                if(node->right!=NULL && !visited[node->right]){
                    q.push(node->right);
                    visited[node->right] = true;
                }
                if(parentMap[node] && !visited[parentMap[node]]){
                    q.push(parentMap[node]);
                    visited[parentMap[node]] = true;
                }
            }
        }

        vector<int>ans;
        while(!q.empty()){
            ans.push_back(q.front()->val);
            q.pop();
        }
        return ans;
    }
};
