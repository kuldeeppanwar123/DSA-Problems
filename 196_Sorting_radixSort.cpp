void countSort(vector<int>& , int);

void radixSort(vector<int>&arr){
int mx = *max_element(arr.begin(),arr.end());

    for(int exp=1; mx/exp>0;exp*=10){
        countSort(arr,exp);
    }
}

void countSort(vector<int>&arr,int exp){
    int n = arr.size();
    vector<int>count(10,0);
    vector<int>ans(n);

    for(int i=0; i<n; i++){
        count[(arr[i]/exp)%10]++;
    }

// cumulative sum of count
    for(int i=1; i<10; i++)
    count[i] +=count[i-1];

    for(int i=n-1; i>=0; i--){
        int idx = count[(arr[i]/exp)%10]-1;
        ans[idx] = arr[i];
        count[(arr[i]/exp)%10]--;
    }

    arr = ans;
}

int main(){
    vector<int>arr = {1,33,414,2,87,100,6,44};
    // cout<<*max_element(arr.begin() , arr.end());
    radixSort(arr);
    for(int i:arr)
    cout<<i<<" ";

    return 0;
}
