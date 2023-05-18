vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        vector<int> scount(26,0);
        vector<int> pcount(26,0);

        int m = s.size();
        int n = p.size();

        if(n>m)return ans;

        for(int i=0; i<n; i++){
            scount[s[i]-'a']++;
            pcount[p[i]-'a']++;
        }

        int i=n;
        for(; i<m; i++){
            if(pcount==scount){
                ans.push_back(i-n);
            }
            scount[s[i]-'a']++;
            scount[s[i-n]-'a']--;
        }
        if(pcount==scount){
                ans.push_back(i-n);
            }

            return ans;
    }
