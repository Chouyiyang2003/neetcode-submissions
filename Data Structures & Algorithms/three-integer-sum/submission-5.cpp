class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i = 0 ; i < nums.size() ; i++){
            int target = -nums[i];
            int left = i + 1;
            int right = nums.size()-1;
            while(left < right){
                // cout << nums[left] + nums[right] << " & " << target << endl;
                if(nums[left] + nums[right] == target){
                    ans.push_back({nums[i], nums[left], nums[right]});
                    right--;
                    left++;
                    while(left <= right && nums[left] == nums[left-1])left++;
                    while(left <= right && nums[right] == nums[right+1])right--;
                }
                if(nums[left] + nums[right] > target)right--;
                else left++;
            }
        }
        return ans;
    }
};
