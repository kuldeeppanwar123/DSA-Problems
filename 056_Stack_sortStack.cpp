
void insertAtRightPosition(stack<int>&st,int ele){
    if(st.empty()||st.top()<=ele){
        st.push(ele);
        return;
    }
     int topEle = st.top();
     st.pop();
     insertAtRightPosition(st,ele);
     st.push(topEle);
}

void sortStack(stack<int>&st){
    if(st.empty()){
        return;
    }
    int ele = st.top();
    st.pop();
    sortStack(st);
    insertAtRightPosition(st,ele);
}
