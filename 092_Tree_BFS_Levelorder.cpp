vector<int> levelOrder(Node* node)
    {
      //Your code here
      queue<Node*>q;
      if(node!=NULL);
      vector<int>v;
      q.push(node);
      
      while(!q.empty()){
          Node*t = q.front();
          v.push_back(t->data);
          q.pop();
          
          if(t->left!=NULL)
          q.push(t->left);
          
          if(t->right!=NULL)
          q.push(t->right);
      }
      return v;
    }
