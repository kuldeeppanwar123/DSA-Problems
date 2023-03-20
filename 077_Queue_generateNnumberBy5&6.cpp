vector<string>genrate(int n){
    queue<string>q;
    vector<string>ans;
    q.push("");
    for(int i=0; i<n/2;i++){
       string x = q.front();
       q.pop();
       ans.push_back(x+"5");
       ans.push_back(x+"6");
       q.push(x+"5");
       q.push(x+"6");
    }
 
    if(n%2!=0)
     ans.push_back(q.front()+"5");

     return ans;
}
