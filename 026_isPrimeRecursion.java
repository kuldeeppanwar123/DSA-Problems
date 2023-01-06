public static boolean isPrime(int num , int i){
        
        if(num<=2)
        return ((num==2));
        
        if(num%i==0)
        return false;
        
        if(i*i>num)
        return true;
        
        return isPrime(num , i+1);
    }
