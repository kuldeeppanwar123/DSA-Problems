#include<iostream>
#include<stack>
#include<cstring>
using namespace std;

int main(){
    //  string s = "kuldeep";
     char ch[] = "kuldeep";
     stack<char>st;

     for(int i=0; i<strlen(ch); i++){
        st.push(ch[i]);
     }
    cout<<st.size();
    int i=0;
     while (!st.empty())
     {
        ch[i]=st.top();
        st.pop();
        i++;
     }
     ch[i] = '\0';
     cout<<ch<<endl;
     
    return 0;
}
