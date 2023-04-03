vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int k) {
                             vector<long long>ans;
                             deque<long long>dq;
                             for(long long i=0; i<k; i++){
                                 if(A[i]<0){
                                     dq.push_back(i);
                                 }
                             }
                             if(dq.empty())
                                  ans.push_back(0);
                            else{
                                     ans.push_back(A[dq.front()]);
                                 }   
                             
                             for(long long i=k; i<N; i++){
                                 while(!dq.empty() && dq.front()<=(i-k))
                                      dq.pop_front();
                                  
                                  
                                 if(A[i]<0){
                                     dq.push_back(i);
                                 }
                                 
                                 if(dq.empty())
                                  ans.push_back(0);
                                 else{
                                     ans.push_back(A[dq.front()]);
                                 }    
                             }
                             return ans;
 }
