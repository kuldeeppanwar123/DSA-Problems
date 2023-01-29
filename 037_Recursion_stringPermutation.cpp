void permutate(string s , int i=0){

 if(i==s.length()-1){
    cout<<s<<endl;
 }
    for(int j=i; j<s.length(); j++){
        swap(s[i] , s[j]);
        permutate(s ,i+1);
        swap(s[i] , s[j]); 
    }
}





Note:-
    permutation:-permutation relates to the act of arranging all the members of a set into some sequence or order.
    permutations of string "ABC" 
ABC
ACB
BAC
BCA
CBA
CAB
