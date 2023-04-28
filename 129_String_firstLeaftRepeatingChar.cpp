// intuition-1
char firstRep (string s)
    {
        for(int i=0; i<s.size()-1; i++){
            auto t = s.find(s[i],i+1);
            if(t!=string::npos)
            return s[i];
        }
        return '#';
    }




// intuition-2
char firstRep (string s)
    {
        int count[26] = {0};
        for(int i=0; i<s.size(); i++){
           count[s[i]-'a']++;
        }
        
        for(int i=0; i<s.size(); i++){
            if(count[s[i]-'a']>1)
             return s[i];
        }
        return '#';
    }
