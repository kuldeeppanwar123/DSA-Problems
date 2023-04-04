string FirstNonRepeating(string A){
		    // Code here
		    string ans;
		    deque<char>dq;
		    map<char , int>mp;
		    for(int i=0; i<A.length(); i++){
		        mp[A[i]]++;
		        dq.push_back(A[i]);
		        while(!dq.empty() && mp[dq.front()]>1)
		        dq.pop_front();
		        
		        char x = (dq.empty())?'#':dq.front();
		        ans+=x;
		    }
		    return ans;
		}
