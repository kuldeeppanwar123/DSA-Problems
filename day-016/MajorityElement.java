 //boyer moore's algorithm
public int majorityElement(int[] nums) {
        int mELe = nums[0];
        int count = 1;
        for(int i=0; i<nums.length; i++){
           
           if(nums[i]==mELe)
             count++;
           else{
               count--;
           }

           if(count==0){
               count=1;
               mELe = nums[i];
           }
        }

        count=0;
        for(int i=0; i<nums.length; i++){
            if(nums[i]==mELe)
            count++;
        }
        if(count>(nums.length/2))
        return mELe;

        else
        return -1;


    }
