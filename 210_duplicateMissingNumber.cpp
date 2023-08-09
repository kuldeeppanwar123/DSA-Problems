vector<int> repeatedNumber(const vector<int> &A) {
    vector<int>map(A.size()+1 , 0);
    for(int i:A){
        map[i]++;
    }
    int duplicate , missing;
    for(int i=1; i<A.size()+1; i++){
        if(map[i]==2) duplicate = i;
        if(map[i]==0) missing = i;
    }
    return {duplicate,missing};
}
