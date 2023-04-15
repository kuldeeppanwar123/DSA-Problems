    bool isLeaf(Node*node){
        return ((node->left==NULL)&&(node->right==NULL));
    }
    

    int isSumProperty(Node *node)
    {
     if(isLeaf(node))return true;
        
        int leftVal = (node->left!=NULL)?node->left->data:0;
        int rightVal = (node->right!=NULL)?node->right->data:0;
        
        if(node->data!=(leftVal+rightVal))
        return false;
        
        bool left = (node->left!=NULL)?isSumProperty(node->left):true;
        bool right = (node->right!=NULL)?isSumProperty(node->right):true;
        
        return left && right;
     
    }
