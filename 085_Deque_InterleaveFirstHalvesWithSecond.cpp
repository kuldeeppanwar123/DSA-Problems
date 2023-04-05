#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void solution(queue<int>&q){
    int n = q.size();
   queue<int>q1;
   queue<int>q2;
    for(int i=0; i<n/2; i++){
        q1.push(q.front());
        q.pop();
    }
    for(int i=0; i<n/2; i++){
        q2.push(q.front());
        q.pop();
    }
    for(int i=0; i<n/2; i++){
        q.push(q1.front());
        q.push(q2.front());
        q1.pop();
        q2.pop();
        // q2.push(q.pop());
    }

}

void solution2(queue<int>&q){
    int halfsize = q.size()/2;
    stack<int>st;
    for(int i=0; i<halfsize; i++){
        st.push(q.front());
        q.pop();
    }
    for(int i=0; i<halfsize; i++){
        q.push(st.top());
        st.pop();
    }
    for(int i=0; i<halfsize; i++){
        q.push(q.front());
        q.pop();
    }
    for(int i=0; i<halfsize; i++){
        st.push(q.front());
        q.pop();
    }
    for(int i=0; i<halfsize; i++){
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }
}

void solution3(queue<int>&q){
    int halfsize = q.size()/2;
    queue<int>temp;

    for(int i=0; i<halfsize; i++){
        temp.push(q.front());
        q.pop();
    }
    for(int i=0; i<halfsize; i++){
        q.push(temp.front());
        temp.pop();
        q.push(q.front());
        q.pop();
    }
}
int main(){
    queue<int> q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    q.push(18);
    q.push(19);
    q.push(20);
    solution3(q);
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}
