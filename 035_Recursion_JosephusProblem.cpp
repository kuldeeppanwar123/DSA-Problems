//count start with 0
int Josephus(int n , int k){
  if(n==1)return 0;
  
  return (Josephus(n-1 , k)+k)%n;  
}


//count start with 1
int JosephusOne(int n , int k){  
  return (Josephus(n , k)+1;  
}
