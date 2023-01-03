public static int sum_of_digit(int n)
    {
      if(n%10==n)return n;      
      return n%10+sum_of_digit(n/10);
    }
