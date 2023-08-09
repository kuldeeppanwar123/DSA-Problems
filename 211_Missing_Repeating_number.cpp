//approach 1
// time - O(N)
// space - O(N)
pair<int,int> missingAndRepeating(vector<int> &A, int n)
{
    vector<int>map(A.size()+1 , 0);
    for(int i:A){
        map[i]++;
    }
    int duplicate , missing;
    for(int i=1; i<A.size()+1; i++){
        if(map[i]==2) duplicate = i;
        if(map[i]==0) missing = i;
    }
    return {missing,duplicate};	
}




// optimal approach using maths
// time O(N) spaceO(1)

pair<int,int> missingAndRepeating(vector<int> &A, int n)
{
    long long sumC1 = 0;
    long long sumC2 = 0;
    long long sumR1 , sumR2;
    long long res1,res2,res3;
    
    for(long long i:A){
       sumC1+=i;
       sumC2+=(long long)pow(i,2);
    }
    sumR1 = (n*(n+1))/2;
    sumR2=(sumR1*(2*n+1))/3;
    
    res1 = sumC1 - sumR1;
    res2 = sumC2 - sumR2;
    
    res3 = res2/res1;
    
    long long duplicate = (res1+res3)/2;
    long long missing = res3-duplicate;
    
    return {missing,duplicate};    
}
