int MaxMinSumInWindowK(int *arr,int size,int k){
    int sum = 0;
    deque<int>max;
    deque<int>min;

    for(int i=0; i<k; i++){
        while(!max.empty() && arr[i]>=arr[max.back()])
        max.pop_back();

         while(!min.empty() && arr[i]<=arr[min.back()])
        min.pop_back();

        max.push_back(i);
        min.push_back(i);
    }

    sum+=arr[max.front()]+arr[min.front()];

    for(int i=k; i<size; i++){
        while(!max.empty() && max.front()<=i-k)
        max.pop_front();

        while(!min.empty() && min.front()<=i-k)
        min.pop_front();

        while(!max.empty() && arr[i]>=arr[max.back()])
        max.pop_back();

        max.push_back(i);

        while(!min.empty() && arr[i]<=arr[min.back()])
        min.pop_back();

        min.push_back(i);

        sum+=arr[max.front()]+arr[min.front()];

    }
    return sum;
}
