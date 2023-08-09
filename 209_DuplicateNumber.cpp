// approach 0
using (N^2)

// approach 1
int findDuplicate(vector<int>& nums) {
        vector<int>map(nums.size()+1,0);
        int ans;
        for(int i:nums){
            if(map[i]==1){
               ans = i;
               break;
            }
            map[i]++;
        }
        return ans;
        
    }



// approach 2
int findDuplicate(vector<int>& nums) {
        unordered_set<int>set;
        int ans;
        for(int item:nums){
            if(set.find(item)!=set.end()){
                ans =  *set.find(item);
                break;
            }
            set.insert(item);
        }
        return ans;
    }


// approach 3
using sorting(N*logN)

        
// approach 4
int findDuplicate(vector<int>& nums) {
        int slow = 0; 
        int fast = 0;

        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow!=fast);

        slow=0;
        while(slow!=fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
