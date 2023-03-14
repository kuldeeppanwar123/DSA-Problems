  int precedence(char op){
   if(op=='+' || op=='-'){
    return 1;
   }
   else if(op=='*' || op=='/'){
    return 2;
   }
   else if (op=='^')
   {
    return 3;
   }
   else{
    return -1;
   }
}
    // Function to convert an infix expression to a postfix expression.
    string infixToPostfix(string s) {
        string ans;
    stack<char>st;
    for(int i=0; i<s.length();i++){
       char ch = s[i];
       
       if(ch ==' ' ||ch=='\t')
       continue;

       else if((ch>='a'&&ch<='z') || (ch>='A'&&ch<='Z')){
        ans+=ch;
       }

       else if(ch=='('){
        st.push(ch);
       }

       else if(ch==')'){
          while (!st.empty() && st.top()!='(')
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
    return ans;
    }
