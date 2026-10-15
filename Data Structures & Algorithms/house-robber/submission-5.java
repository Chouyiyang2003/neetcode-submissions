class Solution {
    public int rob(int[] nums) {
        return ans(nums, 0);
    }

    public static ans(int[] nums, location){
        Math.max(ans(nums, location+1),nums[i]+ans(nums, location+2));
    }
}
