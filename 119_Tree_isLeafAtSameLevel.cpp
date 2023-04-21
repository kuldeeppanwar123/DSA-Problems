class Solution{
    bool flag = true;
    int firstHeight = -1;
  public:
    /*You are required to complete this method*/
    void checkHelper(Node*node , int currHeight ){
        if(node==NULL)return;
        if(!flag)return;
        
        if(node->left==NULL && node->right==NULL){
            if(firstHeight==-1)
              firstHeight = currHeight;
            else
              if(firstHeight!=currHeight)
              flag = false;
              
            return;
        }
        checkHelper(node->left , currHeight+1);
        checkHelper(node->right, currHeight+1);
    }
    bool check(Node *root)
    {
       checkHelper(root , 0);
       return flag;
    }
};
