class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int m = 0;
        int len = 1;
        if(nums.size() == 1){
            return nums.size();
        }
        for(int i = 1 ; i < nums.size() ; i++){
            if(nums[i] == nums[i-1]){
                continue;
            }
            if(nums[i]-nums[i-1] != 1){
                len = 1;
            }
            else{
                len++;
            }
            m = max(m,len);
        }
        m = max(m,len);
        return m;
    }
};
