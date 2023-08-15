vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        map<int,int>map;

        for(int i=0; i<nums.size(); i++){
            int remaining = target-nums[i];

            auto it = map.find(remaining);
            if(it!=map.end()){
                ans.push_back(it->second);
                ans.push_back(i);
                break;
            }
            map.insert({nums[i] , i});
        }
        return ans;        
    }
