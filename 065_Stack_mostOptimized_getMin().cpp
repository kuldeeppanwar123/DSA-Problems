time O(1)
space O(1)


class Solution{
    int minEle;
    stack<int> s;
    int minm;
    public:
    
       /*returns min element from stack*/
       int getMin(){
           if(s.empty())return -1;
           return minm;
           //Write your code here
       }
       
       /*returns poped element from stack*/
       int pop(){
           if(s.empty())return -1;
           if(s.top()<=minm){
               int x = minm;
               minm = 2*minm-(s.top());
               s.pop();
               return x;
           }
           else{
               int x = s.top();
               s.pop();
               return x;
           }
           //Write your c;ode here
       }
       
       /*push element x into the stack*/
       void push(int x){
           if(s.empty()){
               minm = x;
               s.push(x);
           }
           else if(x<=minm){
               s.push(2*x-minm);
               minm = x;
           }
           else 
             s.push(x);
           
           //Write your code here
       }
}
