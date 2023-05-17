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


// intuition -2 (Optimal solution)
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
