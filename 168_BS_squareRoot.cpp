    int mySqrt(int x) {
        int low = 1;
        int high = x;
        int ans = 0;

        while(low<=high){
            int mid = low+(high-low)/2;
//          long long  sqr = mid*mid;     Runtime error.
//          if(sqr==x) return mid; 

            if(mid == x/mid) return mid;
            else if(mid>x/mid)high = mid-1;
            else low = mid+1;
        }
        return high;
    }
