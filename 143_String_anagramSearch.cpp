//intution-1 (Naive approach) 
int search(string pat, string txt) {
	    int count=0;
	    for(int i=0; i<txt.size()-pat.size()+1; i++){
	        if(isAnagram(pat , txt , i))
	          count++;
	    }
	    return count;
	}
    bool isAnagram(string pat , string txt, int j){
        int count[26] = {0};
        for(int i=j; i<j+pat.size(); i++){
            count[txt[i]-'a']++;
            count[pat[i-j]-'a']--;
        }
        
        for(int i:count){
            if(i!=0)return false;
        }
        return true;
    }


// intuition-2 (optimal)
 vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        int m = s.size();
        int n = p.size();

        if(n>m)return ans;
        sort(p.begin(), p.end());
        for(int i=0; i<=m-n; ++i){
            string temp = s.substr(i , n);
            sort(temp.begin(), temp.end());
            if(temp==p)
            ans.push_back(i);
        }
        return ans;
    }




// intuition -3 (most Optimal solution)
bool isMatch(int patcount[] , int txtcount[]){
        for(int i=0; i<26; i++){
            if(patcount[i]!=txtcount[i])
             return false;
        }
        return true;
    }
    
	int search(string pat, string txt) {
	    int count =0;
	    
	    int m = txt.size();
	    int n = pat.size();
	    
	    int patcount[26] = {0};
	    int txtcount[26] = {0};
	    
	    for(int i=0; i<n; i++){
	        patcount[pat[i]-'a']++;
	        txtcount[txt[i]-'a']++;
	    }
	    
	    for(int i=n; i<m; i++){
	        if(isMatch(patcount , txtcount)){
	            count++;
	        }
	        txtcount[txt[i]-'a']++;
	        txtcount[txt[i-n]-'a']--;
	    }
	    if(isMatch(patcount , txtcount)){
	            count++;
	        }
	   return count; 
	}
