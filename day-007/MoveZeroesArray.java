  public void Swap(int[]a , int i ,int j){
        int temp = a[i];
        a[i] = a[j];
        a[j]=temp;
    }
    public void moveZeroes(int[] nums) {
       int pointer=0;
        for(int i=0; i<nums.length; i++){
            if(nums[i]!=0){
                Swap(nums , pointer , i);
                pointer++;
            }
        }
    }
