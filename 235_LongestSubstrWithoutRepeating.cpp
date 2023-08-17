int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int ans = 0;

        for(int i=0;i<n; i++){
            set<char>set;
            int count = 0;
            int j=i;
            while(j<n && set.find(s[j])==set.end()){
                count++;
                set.insert(s[j]);
                j++;
            }
            ans = max(ans , count);

        }
        return ans;
    }
