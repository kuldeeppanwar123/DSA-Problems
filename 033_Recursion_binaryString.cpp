void print(int n , string str){
    if(n==0){
        cout<<str<<endl;
        return;
    }
    
    print(n-1 , str+"0");
    if(str.back()!='1')
    print(n-1 , str+'1');
}
