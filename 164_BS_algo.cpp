public int helper(int[]arr , int target , int low ,int high){
        if(low>high)
        return -1;

        int mid = low+(high-low)/2;

        if(target==arr[mid])
        return mid;

        else if(target<arr[mid])
        return helper(arr, target , low , mid-1);

        else
        return helper(arr , target , mid+1, high);
    }
    public int search(int[] nums, int target) {
        return helper(nums, target , 0, nums.length-1);
    }
