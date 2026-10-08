class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                int sum_ij=nums[i]+nums[j];
                if(sum_ij == target){
                    return {i,j};
                }
            }
        }
    }
};
