class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> us;
        for(auto num:nums){
            us.insert(num);
            if(us.count(num) > 1){
                return true;
            }
        }
        return false;
    }
};