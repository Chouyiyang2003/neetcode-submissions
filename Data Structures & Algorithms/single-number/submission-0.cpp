class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> uset;

        for (int i = 0; i < nums.size(); i++) {
            if (uset.find(nums[i]) == uset.end()) {
                uset.insert(nums[i]);
            }
            else {
                uset.erase(nums[i]);
            }
        }

        return *uset.begin();
    }
};
