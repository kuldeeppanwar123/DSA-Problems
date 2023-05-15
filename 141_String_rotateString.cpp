bool rotateString(string s, string goal) {
        if(s.size()!=goal.length())
          return false;
  
        int n = s.size();
  
        for(int i=0; i<n; i++){
            if(s==goal)return true;
            char ch = s[0];
            s.erase(0,1);
            s.push_back(ch);
        }
        return false;
    }



// intiution -2
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length())
           return false;
        s+=s;
        int check = s.find(goal);
        return (check!=string::npos)?true:false;
    }
