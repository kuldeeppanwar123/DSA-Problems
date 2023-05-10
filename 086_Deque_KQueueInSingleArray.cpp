class myQueue{
    int size;
    int k;
    int*arr;
    int*next;
    int*front;
    int*rear;
    int freespot;
    public:
    myQueue(int n,int k){
        size = n;
        this->k = k;
        arr = new int[size];
        next = new int[size];
        front = new int[k];
        rear = new int[k];

        for(int i=0; i<k; i++){
            front[i] = -1;
            rear[i]= -1;
        }
        for(int i=0; i<size; i++){
            next[i] = i+1;
        }
        next[size-1] = -1;
        freespot =0;
    }

    void push(int qn , int x){
    if(freespot==-1){
        cout<<"queue is full\n";
        return;
    }
    int index = freespot;
    freespot = next[index];

    if(front[qn-1]==-1){
        front[qn-1] = index;
    }
    else{
        next[rear[qn-1]] = index;
    }
    next[index] = -1;
    rear[qn-1] = index;
    arr[index] = x;
}
int pop(int qn){
    if(front[qn-1]==-1){
        cout<<"queue is empty\n";
        return -1;
    }

    int index = front[qn-1];
    front[qn-1] = next[index];

    next[index] = freespot;
    freespot = index;
    return arr[index];
}

int* array(){return arr;}
};
