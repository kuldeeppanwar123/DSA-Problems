    bool static compare(pair<int , int >a , pair<int , int> b){
       if(a.second==b.second)
           return a.first>b.first;
        
        return a.second<b.second;
    }
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int , int>mp;
        
        for(int i:nums){
           mp[i]++;
        }
        vector<pair<int , int>>v;
        for(auto i: mp){
            v.push_back(i);
        }
        sort(v.begin() , v.end() , compare);
        
        vector<int>ans;
        for(int i=0; i<v.size(); i++){
            for(int j=0; j<v[i].second; j++){
                ans.push_back(v[i].first);
            }
        }
        return ans;
    }
