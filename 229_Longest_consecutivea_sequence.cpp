int longestConsecutive(vector<int>& nums) {
        unordered_set<int>set(nums.begin() , nums.end());
        int maxi=0;
        for(int itm:set){
            int count = 0;
            if(set.find(itm-1)==set.end()){
                int curr = itm;
             do{
                 count++;
                 curr++;
             }while(set.find(curr)!=set.end());
            }
            maxi = max(maxi , count);
        }
        return maxi;
    }
