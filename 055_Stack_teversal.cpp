void traverse_stack(stack<int> & st) {
    if(st.empty())
        return;
    int x = st.top();
    cout << x << " ";
    st.pop();
    traverse_stack(st);
    st.push(x);
}





Advantages of Recursion based approach:

Maintains the original stack elements.
Problems with Recursion based approach:

Maintains an internal stack.
May fail for large size of the stack.
