class Solution {
    public int rob(int[] nums) {
        return ans(nums, 0);
    }

    public int ans(int[] nums,int location){
        if ( location > nums.length-1 ){
            return 0;
        }
       return Math.max(ans(nums, location+1),nums[location]+ans(nums, location+2));
    }
}
