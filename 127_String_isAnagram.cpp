//intuition-1
bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        map<char , int>smap;
        for(int i=0; i<s.size(); i++){
            char c = s[i];
            smap[c]++;
        }
        map<char , int>tmap;
        for(int i=0; i<t.size(); i++){
            char c = t[i];
            tmap[c]++;
        }

        for(auto i:smap){
            if(i.second!=tmap[i.first])return false;
        }
        return true;
    }




//intuition-2
 bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        
        sort(s.begin() , s.end());
        sort(t.begin() , t.end());
        return s==t;
    }



//intuition-3
bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
         transform(s.begin(), s.end(), s.begin(), ::tolower);
         transform(t.begin(), t.end(), t.begin(), ::tolower);
        int count[26]={0};
        for(int i=0; i<s.size(); i++){
            count[s[i]-'a']++;
            count[t[i]-'a']--;
        }
        for(int i=0; i<26; i++){
            if(count[i]!=0)return false;
        }
        return true;
    }



// intuition-4
 bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        map<char , int >Map;
         for(int i=0; i<s.size(); i++){
             Map[s[i]]++;
             Map[t[i]]--;
         }
         for(auto i:Map){
             if(i.second!=0)return false;
         }
         return true;
    }
