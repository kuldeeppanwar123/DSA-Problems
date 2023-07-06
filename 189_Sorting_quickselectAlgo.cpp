int lomutoPartition(int arr[],int low , int high){
        // cout<<"low is : "<<low<<endl;
        // cout<<"high is : "<<high<<endl;
        int i = low-1;
        int pivot = arr[high];
        
        for(int j=low; j<=high-1;j++){
            if(arr[j]<pivot){
                i++;
                swap(arr[i],arr[j]);
            }
        }
        
        swap(arr[i+1],arr[high]);
        return i+1;
    }
    int kthSmallest(int arr[], int low, int high, int k) {
        if(k>high+1)return -1;
        
        while(low<=high){
            int p = lomutoPartition(arr,low,high);
            // for(int i=low; i<high+1; i++){
            //     cout<<arr[i]<<" ";
            // }
            // cout<<endl<<"p is :"<<p<<endl;
            if(p==k-1)return arr[p];
            else if(p>k-1){
                high = p-1;
            }
            else{
                low = p+1;
                // cout<<"else called\n";
                // cout<<low<<endl;
            }
        }
        return -1;
    }
