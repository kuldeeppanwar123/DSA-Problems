
void printSubsequence(vector<int>&arr , int i , vector<int>s){

  if(i==arr.size()){
    for(int itm:s)
    cout<<itm<<" ";
    cout<<endl;
    return;
  }
    printSubsequence(arr, i+1, s);
    s.push_back(arr[i]);
    printSubsequence(arr, i+1, s);
  
}
