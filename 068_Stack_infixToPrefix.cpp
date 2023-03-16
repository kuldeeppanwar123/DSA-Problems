string infixTOPrefix(string s){
          stack<char>st;
          string ans;
         for(int i=s.length()-1; i>=0;i--){
        char ch = s[i];
         
       if(ch ==' ' ||ch=='\t')
       continue;

       else if((ch>='a'&&ch<='z') || (ch>='A'&&ch<='Z')){
        ans+=ch;
       }

       else if(ch==')'){
        st.push(ch);
       }

       else if(ch=='('){
          while (!st.empty() && st.top()!=')')
          {
            ans+=st.top();
            st.pop();
          }
        //   if(!st.empty())
          st.pop();
       }
       else{
        while (!st.empty() && precedence(ch)<=precedence(st.top())){
            ans+=st.top();
            st.pop();
        }        
        st.push(ch);
       }
    }
    while (!st.empty())
    {
        ans+=st.top();
        st.pop();
    }
    //now we have prefix but in reverse oreder. so we reverse the our 'ans' 
    for(int i=0; i<ans.length(); i++){;
        st.push(ans[i]);
    }
    ans.clear();
    while (!st.empty())
    {
        ans+=st.top();
        st.pop();
    }
    
    return ans;
}
