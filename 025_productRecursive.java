public static int product(int n , int m){
        if(n<m)
        return product(m , n);
        
        else if(m!=0)
        return (n+product(n,m-1));
        
        else
        return 0;
    }
