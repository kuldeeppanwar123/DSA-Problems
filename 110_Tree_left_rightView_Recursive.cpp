class Solution
{ vector<int>ans;
    public:    
    void getRightView(Node*node , int level){
        if(node==NULL)
        return;
        
        if(level==ans.size())
        ans.push_back(node->data);
        
        getRightView(node->right , level+1);
        getRightView(node->left , level+1);
        
  }
 
    void getLeftView(Node*node , int level){
        if(node==NULL)
        return;
        
        if(level==ans.size())
        ans.push_back(node->data);
        
        getLeftView(node->left , level+1);
        getLeftView(node->right , level+1);
        
    }
    vector<int> getView(Node *root)
    {
        if(root!=NULL)
        getRightView(root , 0);
      //  getLeftView(root , 0);
        return ans;
 }
};
