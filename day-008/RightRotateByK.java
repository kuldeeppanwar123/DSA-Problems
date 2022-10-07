class Solution {
    public void swap(int[]a , int low , int high){
         int t =a[low];
        a[low] = a[high];
        a[high] = t;
    }
    public void reverse(int[]a , int low , int high){
          while(low<high){
              swap(a , low , high);
              low++;
              high--;
          }
    }
    public void rotate(int[] arr, int d) {
        
        int n = arr.length;
        d = d%n;
        reverse(arr ,n-d,n-1);
        reverse(arr ,0,n-d-1);
        reverse(arr , 0 , n-1 );
    }
}
