// Recursive solution.
class Solution {
    TreeNode*prev;
public:
    void flatten(TreeNode* root) {
        if(root==NULL)
        return;

        flatten(root->right);
        flatten(root->left);

        root->right = prev;
        root->left = NULL;
        prev = root;
    }
}



// iterative approach using stack.
void flatten(Node *root)
    {
        stack<Node*>st;
        if(root!=NULL)
        st.push(root);
        while(!st.empty()){
            Node*curr = st.top();
            st.pop();
            
            if(curr->right)
            st.push(curr->right);
            
            if(curr->left)
            st.push(curr->left);
            
            if(!st.empty())
            curr->right = st.top();
            
            curr->left = NULL;
        }
    }

// using morris traversal

void flatten(Node *root)
    {       
            Node*curr = root;
            while(curr!=NULL){
                if(curr->left!=NULL){
                    prev = curr->left;
                    while(prev->right!=NULL)
                    prev = prev->right;
                    
                    prev->right = curr->right;
                    curr->right = curr->left;
                }
                curr = curr->right;
            }
        }
