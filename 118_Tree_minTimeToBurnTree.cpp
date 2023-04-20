class Solution {
    map<Node* , Node*>parentMap;
  public:
    Node* markParents(Node*root,int target){
        Node*targetNode;
        queue<Node*>q;
        if(root!=NULL)
          q.push(root);
          
          while(!q.empty()){
              Node*node = q.front();
              if(node->data ==target){
                  targetNode = node;
              }
              q.pop();
              
              if(node->left!=NULL){
                  parentMap[node->left] = node;
                  q.push(node->left);
              }
              if(node->right!=NULL){
                  parentMap.insert({node->right , node});
                  q.push(node->right);
              }
          }
          return targetNode;
    }
    
       
    int minTime(Node* root, int target) 
    {
       Node*targetNode = markParents(root,target);
       int ans = 0;
       map<Node*, bool>visited;
       queue<Node*>q;
       
       q.push(targetNode);
       visited[targetNode] = true;
       
       while(!q.empty()){
           int size = q.size();
           bool flag = false;
           
           for(int i=0; i<size; i++){
               Node*node = q.front();
               q.pop();
               
               if(node->left&& !visited[node->left]){
                   visited[node->left] = true;
                   q.push(node->left);
                   flag = true;
               }
               if(node->right&& !visited[node->right]){
                   visited[node->right] = true;
                   q.push(node->right);
                   flag = true;
               }
               if(parentMap[node] && !visited[parentMap[node]]){
                   visited[parentMap[node]] = true;
                   q.push(parentMap[node]);
                   flag = true;
               }
           }
           if(flag)ans++;
           
       }
       return ans;
       
    }
};
