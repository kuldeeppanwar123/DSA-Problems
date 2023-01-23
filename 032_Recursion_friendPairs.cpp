int friendPairs(int n){
  if(n<=2)return n;
  return friendPairs(n-1)+(n-1)*friendPairs(n-2);
}
