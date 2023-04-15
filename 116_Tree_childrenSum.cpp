//remaining/panding question

int isSum(TreeNode*node){
    if(node==NULL) return;
    int sum=0;
  
  if(node->left!=NULL)sum+=node->left->data;
  if(node->right!=NULL) sum+=node->right->data;
  
  if(sum>=node->data)
    node->val == sum;
  else{
    if(node->left!=NULL) node->left->data = node->data;
    if(node->right!=NULL) node->right->node->right->data = sum;
  }
  
  isSum(node->left);
  isSum(node->right);
  
  int tota = 0;
  if(node->left!=NULL) 
    total+=node->left->data;
        
  if(node->right!=NULL)
  {
      total+=node->right->data);
  
  }
