// intuition-1
int firstUniqChar(string s) {
        int arr[26] = {0};
        for(int i=0; i<s.size(); i++){
            arr[s[i]-'a']++;
        }
        for(int i=0; i<s.size(); i++){
            if(arr[s[i]-'a']==1)
            return i;
        }
        return -1;
    }




// intuition-2
int firstUniqChar(const string& s) {
        int arr[256];
        fill(arr , arr+256,-1);
        for(int i=0; i<s.size(); i++){
            int idx = arr[s[i]];
            if(idx==-1)
            arr[s[i]] = i;
            else
            arr[s[i]] = -2;
        }

        int ans= INT_MAX;
        for(int i=0; i<256; i++){
            if(arr[i]>=0)
            ans = min(ans,arr[i]);
        }
        if(ans==INT_MAX)
          ans = -1;

          return ans;
    }
