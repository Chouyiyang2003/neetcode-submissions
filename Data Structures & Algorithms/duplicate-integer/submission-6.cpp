class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> um;
        for(int i = 0 ; i < nums.size() ; i++){
            if(um.count(nums[i]) > 0){
                return true;
            }
            um.insert(nums[i]);

        }
        return false;
    }
};