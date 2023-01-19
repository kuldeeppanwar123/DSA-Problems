bool check(string str , int s ,int e){
   if(s>=e)
   return true;

    return( (str[s]==str[e])&& check(str , s+1, e-1));
}

int FirstOccurrence(int*a , int x ,int i,int size){
    if(i==size)
    return -1;

    if(a[i]==x)
    return i;

    return  FirstOccurrence(a , x , i+1,size);
}

int LastOccurrence(int*A , int x, int i , int size){

    if(i==size)
    return -1;

    int isFound = LastOccurrence(A , x ,i+1, size);

    if(isFound==-1 && A[i] ==x)
    return i;

    return isFound;
}
