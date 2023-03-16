int helper(int a, int b, string op)
{
    if (op == "+")
        return a + b;
    else if (op == "-")
        return b - a;
    else if (op == "*")
        return a * b;
    else
        return b / a;
}
int evalRPN(vector<string> &str)
{
    stack<int> st;
    for (int i = 0; i < str.size(); i++)
    {
        if (isdigit(str[i][0]) || str[i].length() > 1)
        {
            int num = stoi(str[i]);
            st.push(num);
        }
        else
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            int c = helper(a, b, str[i]);
            st.push(c);
        }
    }
    return st.top();
}
