class Solution
{ set<string>Set;
	public:
	    void permutation(string s , int idx){
	        if(idx==s.length()-1){
	            Set.insert(s);
	            return;
	        }
	        for(int i=idx; i<s.length(); i++){
	            swap(s[i] , s[idx]);
	            permutation(s , idx+1);
	            swap(s[i] , s[idx]);
	        }
	    }
		vector<string>find_permutation(string S)
		{
		    permutation( S ,0);
		    vector<string>ans;
		    for(string s:Set){
		        ans.push_back(s);
		    }
		    return ans;
		}
};
