class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> um;
        for(int i = 0 ; i < nums.size() ; i++){
            um.insert(nums[i]);
            if(um.count(nums[i]) > 0){
                return true;
            }
        }
        return false;
    }
};