class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> us;
        for(auto num:nums){
            if(us.count(num) > 0){
                return num;
            }
            us.insert(num);
        }
        return false;
    }
};
