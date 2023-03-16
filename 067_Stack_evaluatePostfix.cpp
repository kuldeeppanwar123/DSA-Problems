int helper(int a,int b,char op){
    switch (op)
    {
    case '+':
        return a+b;
    case '-':
        return b-a;
    case '*':
        return a*b;
    case '/':
        return b/a;
    case '^':
        return pow(b,a);
  
    }
    }
    int evaluatePostfix(string s)
    {
        stack<int>st;
    for(int i=0; i<s.length();i++){
        
         if(isdigit(s[i])){
            st.push((s[i]-'0'));           
        }
        else{
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            int c = helper(a,b,s[i]);
            st.push(c);
        }
    }
    return st.top();
    }
