class MyCircularQueue {
    int*arr;
    int front;
    int rear;
    int cap;
    int size;
public:
    MyCircularQueue(int k) {
        cap = k;
        arr = new int[cap];
        front = 0;
        rear = -1;
        size =0;
    }
    
    bool enQueue(int value) {
        if(isFull()){
            return false;
        }
        else{
            rear = (rear+1)%cap;
            arr[rear] = value;
            size++;
            return true;
        }
    }
    
    bool deQueue() {
        if(isEmpty())
        return false;
        else{
            front = (front+1)%cap;
            size--;
            return true;
        }
    }
    
    int Front() {
        if(isEmpty())
        return -1;
        else
        return arr[front];
    }
    
    int Rear() {
        if(isEmpty())
        return -1;
        else
        return arr[rear];
    }
    
    bool isEmpty() {
        return (size==0);
    }
    
    bool isFull() {
        return (size==cap);
    }
};
