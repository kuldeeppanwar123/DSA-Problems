vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;

        int count1 =0,count2=0;
        int ele1 = INT_MIN , ele2=INT_MAX;

        for(int i=0; i<n; i++){
            if(count1==0 && nums[i]!=ele2){
                count1++;
                ele1 = nums[i];
            }

            else if(count2==0 && nums[i]!=ele1){
                count2++;
                ele2 = nums[i];
            }

            else if(ele1 == nums[i])count1++;
            else if(ele2 == nums[i])count2++;
            else {
                count1--;
                count2--;
            }
        }
            count1=0,count2=0;
            for(int itm:nums){
                if(itm==ele1)count1++;
                if(itm==ele2)count2++;
            }

            if(count1>(n/3))ans.push_back(ele1);
            if(count2>(n/3))ans.push_back(ele2);
            return ans;
    }
