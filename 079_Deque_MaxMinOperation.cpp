//we assum always insetMin is  called for inserting min ele and insertMax is for max element.

class DS{
    deque<int>dq;
    public:
    void insertMin(int x){
         dq.push_front(x);
         
    }
    void insertMax(int x){
        dq.push_back(x);
    }
    int getMax(){
       if(dq.empty())
         return -1;
       else
         return dq.back();
    }
    int getMin(){
        if(dq.empty())
          return -1;
        else
          return dq.front();
    }
    int removeMin(){
       if(!dq.empty())
         {
            int x = dq.front();
            dq.pop_front();
            return x;
         }
         return -1;
    }
    int removeMax(){
        if(!dq.empty()){
            int x = dq.back();
            dq.pop_back();
            return x;
        }
        return -1;
    }
};
