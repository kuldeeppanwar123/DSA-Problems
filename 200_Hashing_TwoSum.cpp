vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map<int,int>map;

        for(int i=0; i<nums.size(); i++){
            int comp = target-nums[i];
            auto it = map.find(comp);
            if(it!=map.end()){
                ans.push_back(it->second);
                ans.push_back(i);
                break;
            }
            else{
                map.insert({nums[i],i});
            }
        }
        return ans;
    }
