vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        unordered_map<int,int>map;

        for(int i:nums){
            map[i]++;
        }

        for(auto itm:map){
            if(itm.second>n/3)
             ans.push_back(itm.first);
        }
        return ans;
    }
