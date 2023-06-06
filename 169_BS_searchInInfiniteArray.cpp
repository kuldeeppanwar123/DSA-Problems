int search(int arr[],int x){
  if(arr[0]==x)
    return 0;
  int i=1;
  while(arr[i]<x){
   i = i*2;  
  }
  if(arr[i]==x)
    return i;
  
  return BinarySearch(arr , i/2+1 , i-1);  
}
