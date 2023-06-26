1#include<iostream>
#include<algorithm>
#include<set>
#include<vector>
using namespace std;

vector<int> unions (vector<int>A , vector<int>B){
    int i=0;
    int j=0;

    int n = A.size();
    int m = B.size();

    vector<int>ans;

    while(i<n && j<m){

        if(i>0 && A[i]==A[i-1]){i++; continue;}
        if(j>0 && B[j]==B[j-1]){j++; continue;}

        if(A[i]<B[j]) ans.push_back(A[i++]);
        else if(B[j]<A[i])ans.push_back(B[j++]);
        else{
            ans.push_back(A[i]);
            i++;j++;
        }
    }
    return ans;
}

int main(){
    vector<int>a = {1,1,2,2,2,3,7,8,8,9};
    vector<int>b = {0,0,1,2,3,5,6,6};

    vector<int>ans = unions(a,b);

    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}
