class Solution {
    bool isLeaf(Node*node){
        return (node->left==NULL && node->right==NULL);
    }
    
    void addLeftBoundary(Node*root , vector<int>&ans){
        Node*node = root->left;
        while(node!=NULL){
            if(!isLeaf(node)){
                ans.push_back(node->data);
            }
            if(node->left!=NULL) node = node->left;
            else node= node->right;
        }
    }
    void addLeafBoundary(Node*root, vector<int>&ans){
        if(isLeaf(root)){
            ans.push_back(root->data);
            return;
        }
        if(root->left) addLeafBoundary(root->left,ans);
        if(root->right) addLeafBoundary(root->right,ans);
    }
    void addRightBoundary(Node*root , vector<int>&ans){
        Node*node = root->right;
        stack<int>st;
        while(node!=NULL){
            if(!isLeaf(node)){
                st.push(node->data);
            }
            if(node->right!=NULL)node = node->right;
            else node= node->left;
        }
        
        while(!st.empty()){
           ans.push_back(st.top());
           st.pop();
        }
    }
    
public:
    vector <int> boundary(Node *root)
    {
        vector<int>ans;
        if(root==NULL)return ans;
        if(!isLeaf(root))ans.push_back(root->data);
        addLeftBoundary(root, ans);
        addLeafBoundary(root, ans);
        addRightBoundary(root, ans);
        return ans;
    }
};
