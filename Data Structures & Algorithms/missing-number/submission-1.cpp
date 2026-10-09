class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int index = 0, sum_1 = 0, sum_2 = 0;
        for(int num:nums){
            sum_1 += num;
            index++;
            sum_2 += index;
        }
        return sum_2 - sum_1;
    }
};
