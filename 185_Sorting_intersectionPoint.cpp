vector<int> intersection(vector<int>& A, vector<int>& B) {
        
        vector<int>ans;
        int i=0;
        int j=0;

        int n = A.size();
        int m = B.size();

        sort(A.begin() , A.end());
        sort(B.begin() , B.end());

        while(i<n && j<m){
            if(i>0 && A[i]==A[i-1]){
                i++;
                continue;
            }
            if(A[i]<B[j])i++;
            else if(B[j]<A[i])j++;
            else{
                if(ans.empty() || ans.back()!=A[i])
                 ans.push_back(A[i]);

                 i++;
                 j++;
            }
        }
        return ans;
    }
