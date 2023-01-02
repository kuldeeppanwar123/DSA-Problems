public static void bubble(int[]arr,int n , int index){
        if(n==0)
        return;

        if(n==index){
            bubble(arr ,(n-1), 0);
            
        }
        else{
            if(arr[index]>arr[index+1]){
                int temp = arr[index];
                arr[index] = arr[index+1];
                arr[index+1] = temp;
            }

            bubble(arr,n,( index+1));
            
        }
    }
