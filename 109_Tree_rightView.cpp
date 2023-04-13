    vector<int> rightView(Node *root)
    {
        map<int , int>m;
        stack<pair<int , Node*>>st;
   
         if(root!=NULL)
             st.push({0 , root});
   
        while(!st.empty()){
          auto x = st.top();
          st.pop();
       
          Node*node = x.second;
          int level = x.first;
       
          m.insert({level , node->data});
       
          if(node->left!=NULL)
            st.push({level+1 , node->left});
       
          if(node->right!=NULL)
           st.push({level+1, node->right});
   }
   
   vector<int>ans;
   for(auto x:m){
     ans.push_back(x.second);  
   }
   return ans;
 }
