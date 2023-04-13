vector <int> bottomView(Node *root) {
        // Your Code Here
        queue<pair<Node* , int>>q;
        map<int , Node*>m;
        vector<int>ans;
        
        if(root!=NULL)
        q.push({root , 0});
        while(!q.empty()){
            auto x = q.front();
            q.pop();
            
            Node* node = x.first;
            int v = x.second;
            
            m[v] = node;
            
            if(node->left!=NULL)
            q.push({node->left , v-1});
            
            if(node->right!=NULL)
            q.push({node->right , v+1});
        }
        
        for(auto x:m){
            ans.push_back(x.second->data);
        }
        
        return ans;
    }
