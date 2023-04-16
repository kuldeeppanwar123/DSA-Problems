void isSumProperty(TreeNode*node){
    if(node==NULL)
       return;
    
    int sum = 0;
    if(node->left!=NULL)
      sum+=node->left->data;
    
    if(node->right!=NULL)
      sum+=node->right->data;
      
    if(sum>=node->data)
      node->data = sum;
      
    else if(sum<node->data)
    {
        if(node->left!=NULL)
          node->left->data = sum;
          
        if(node->right!=NULL)
          node->right->data = sum;
    }
    
    isSumProperty(node->left);
    isSumProperty(node->right);
    
    int total = 0;
    if(node->left!=NULL)
    total+=node->left->data;
    
    if(node->right!=NULL)
    total+=node->right->data;
    
    //check if node is leaf
    if(node->left!=NULL && node->right!=NULL) 
    node->data = total;
}
