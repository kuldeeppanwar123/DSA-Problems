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
