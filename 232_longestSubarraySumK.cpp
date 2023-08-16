// TLE
int longestSubarrayWithSumK(vector<int> a, long long k) {
    int ans =0;
    long long sum =0;
    unordered_map<long long,int>map;

    for(int i=0; i<a.size(); i++){
        sum+=a[i];
        if(sum==k){
            ans = i+1;
        }

        else if(map.find(sum-k)!=map.end()){
        //    int idx = map.find(sum-k)->second;
            int len = i-map[sum-k];
            ans = max(ans, len);
        }
        // map.insert({sum , i});
        if(map.find(sum)==map.end())
        map[sum] = i;
    }
    return ans;
}
