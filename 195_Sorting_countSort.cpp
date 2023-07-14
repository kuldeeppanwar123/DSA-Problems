void countSort(vector<int>&arr){
int n = arr.size();
int mx = INT_MIN;
for(int i:arr){
mx = max(mx,i);
}

vector<int>count(mx+1,0);

for(int i=0; i<n; i++){
    count[arr[i]]++;
}

// cumulative sum for each index.
for(int i=1; i<mx+1; i++){
    count[i] = count[i]+count[i-1];
}

vector<int>res(n);

for(int i=0; i<n; i++){
    int idx = count[arr[i]]-1;
    res[idx] = arr[i];
    count[arr[i]]--;
}

arr = res;

}
