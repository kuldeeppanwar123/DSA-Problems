int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;

        int maxEle = *max_element(nums.begin() , nums.end());
        int minEle = *min_element(nums.begin() , nums.end());
        if(minEle<0)minEle = (-1)*minEle;
        cout<<minEle<<endl;
        int maxNo = max(maxEle,minEle);

        vector<vector<int>>map(2,vector<int>(maxNo+1 , 0));

        for(int itm:nums){
            if(itm<0){
                itm*=(-1);
                map[0][itm] = 1;
            }
            else{
                map[1][itm] = 1;
            }
        }

        int count =0;
        int maxi = 1;
        for(int i=maxNo; i>0; i--){
            if(map[0][i]==1){
                count++;
                maxi = max(maxi ,count);
            }else{
                count =0;
            }
        }
        for(int i=0; i<=maxNo; i++){
            if(map[1][i]==1){
                count++;
                maxi = max(maxi ,count);
            }else{
                count =0;
            }
        }
       
        return maxi;
    }
