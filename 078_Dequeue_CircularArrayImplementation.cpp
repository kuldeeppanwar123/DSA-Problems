class MyCircularDeque {
     int*arr;
    int n;
    int front;
    int size;

public:
    MyCircularDeque(int s) {
        n=s;
        arr = new int[n];
        front = 0;
        size = 0;
    }
     int getRearIndex(){
        return (front+size-1)%n;
    }
    
    bool insertFront(int value) {
        if(!isFull()){
            front = (front+n-1)%n;
            arr[front] = value;
            size++;
            return true;
        }
        return false;
    }
    
    bool insertLast(int value) {
        if(!isFull()){
           int rear = getRearIndex();
           rear = (rear+1)%n;
            arr[rear] = value;
            size++;
            return true;
        }
        return false;
    }
    
    bool deleteFront() {
        if(!isEmpty()){
        front = (front+1)%n;
        size--;
        return true;
       }
       return false;
    }
    
    bool deleteLast() {
        if(!isEmpty()){
        size--;
        return true;
       }
       return false;
    }
    
    int getFront() {
        return (isEmpty())?-1:arr[front];
    }
    
    int getRear() {
        return (isEmpty())?-1:arr[getRearIndex()];
    }
    
    bool isEmpty() {
        return size==0;
    }
    
    bool isFull() {
        return size==n;
    }
};
