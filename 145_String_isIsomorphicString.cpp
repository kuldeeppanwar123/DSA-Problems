// intution-1 (optimal)
bool isIsomorphic(string str1, string str2) {
      int len1 = str1.size();
        int len2 = str2.size();
        
        if(len1!=len2)
        return false;
        
        unordered_map<char , char>map;
        unordered_set<char>set;
        
        for(int i=0; i<len1; i++){
            if(map.find(str1[i])!=map.end()){
                if(map[str1[i]]!=str2[i])
                 return false;
            }
            else{
                if(set.find(str2[i])!=set.end()){
                    return false;
                }
                else{
                    map[str1[i]] = str2[i];
                    set.insert(str2[i]);
                }
            }
        }
        return true;
    }





// intution-2(optimal)
bool isIsomorphic(string s, string t) {
        int map[256] = {0};
        int set[256] = {0};

        for(int i=0; i<s.size(); i++){
            if(map[s[i]]==0){
                if(set[t[i]]!=0)
                  return false;

                else{
                    map[s[i]] = t[i];
                    set[t[i]] = 1;
                }
            }
            else{
                if(map[s[i]]!=t[i])
                return false;
            }
        }
        return true;
    }

