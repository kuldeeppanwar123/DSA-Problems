class Node{
    public:
    int data;
    Node*next;
    Node(){ }
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

class Queue{
    int size;
    Node* front;
    Node* rear;
    public:
    Queue(){
        front = rear = NULL;
        size =0;
    }

    void enqueue(int x){
     Node *temp = new Node(x);
     if(rear==NULL){
        front = temp;
        rear = temp;
     }
     else{
       rear->next = temp;
       rear = temp;
     }
     size++;
    }

    void dequeue(){
      if(empty())return;
      if(front==rear)rear=NULL;
      Node*temp = front;
      front = front->next;
      delete temp;
      size--;
    }
    int getFront(){
      if(empty()) return -1;
      return front->data;
    }
    int getRear(){
      if(empty())return -1;
      return rear->data;
    }
    int getSize(){
     return size;
    }
    bool empty(){
    return (front==NULL);
    }

    
};
