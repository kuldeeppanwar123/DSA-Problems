   bool isPallindrome(string s,int start ,int end){
       while(start<=end){
           if(s[start++]!=s[end--])
            return false;
       }
       return true;
   }

void helper(string s, int ind,vector<string>&result,vector<vector<string>>&ans){
    if(ind==s.size()){
        ans.push_back(result);
        return;
    }
    for(int i=ind; i<s.size(); i++){
        if(isPallindrome(s,ind,i))
         {
            result.push_back(s.substr(ind,i-ind+1));
            helper(s,i+1,result,ans);
            result.pop_back();
          
         }

    }
}
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string>result;
        helper(s,0,result,ans);
        return ans;
    }
