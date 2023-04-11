vector<int> topView(Node *root)
    {
        map<int,int>m;
        queue<pair<Node*,int>>q;
        if(root!=NULL)q.push({root , 0});
        while(!q.empty()){
            auto x = q.front();
            q.pop();
            Node*node = x.first;
            int v = x.second;
            m.insert({v, node->data});
            
            if(node->left!=NULL){
                q.push({node->left , v-1});
            }
            if(node->right!=NULL){
                q.push({node->right , v+1});
            }
        }
        vector<int>ans;
        for(auto x:m){
            ans.push_back(x.second);
        }
        return ans;
}
