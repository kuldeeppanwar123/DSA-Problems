public int MaxEvenOddSubarray(int[]arr){
        int res = 0;
        int count=1;

        for(int i=1; i<arr.length; i++){
            if((arr[i]%2==0 && arr[i-1]%2!=0) || (arr[i]%2!=0 && arr[i-1]%2==0))
             count++;

             else{
                res = Math.max(res , count);
                count=1;
             }
        }
        return res;
    }
