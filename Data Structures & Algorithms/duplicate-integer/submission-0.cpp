class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> uset;
        int len = nums.size();
        for (int i = 0 ; i < len ; i++){
            if (uset.count(nums[i])>0){
                return true;
            }
            uset.insert(nums[i]);
        }
        return false;
    }
};