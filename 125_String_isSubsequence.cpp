bool isSubsequence(const string &  sub, const string & str) {
        int i=0;
        int j=0;
        while(i<str.size() && j<sub.size()){
            if(str[i]==sub[j]) j++;
            i++;
        }
        return j==sub.size();
    }
