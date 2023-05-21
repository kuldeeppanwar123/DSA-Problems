// intuition-1 (Naive)
int lengthOfLongestSubstring(string s) {
        vector<int>arr(256,0);

        int ans = 0;
        int count=0;
        int n=s.size();

        for(int i=0; i<n; i++){
            count=0;
            arr.assign(256,0);
            for(int j=i; j<n; j++){
                if(arr[s[j]]==0){
                    arr[s[j]]=1;
                    count++;
                }
                else{
                    break;   
                }
            }
            ans = max(ans , count);
        }
        return ans;
    }


// intuition-2 (optimal)
int lengthOfLongestSubstring(string s) {
        vector<int>prev(256,-1);
        int n = s.size();
        int i=0;
        int res = 0;
        int maxEnd = 0;

        for(int j=0; j<n; j++){
            i = max(i ,prev[s[j]]+1);
            maxEnd = j-i+1;
            res = max(res , maxEnd);
            prev[s[j]] = j;
        }
        return res;
    }
