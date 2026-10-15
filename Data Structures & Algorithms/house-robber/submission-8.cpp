class Solution {
public:
    int rob(vector<int>& nums) {
        vector <int> dp(nums.size()+1, 0);

        if(nums.size()==2){
            return max(nums[1] , nums[0]);
        }
        else if(nums.size()==1){
            return nums[0];
        }
        else if(nums.size()==0){
            return 0;
        }

        dp[0]=nums[0];
        dp[1]=nums[1];
     
        int prev1=0;
        int prev2=0;
        int ans=0;

        
        
        for (int i=2; i<nums.size(); i++){
            dp[i] = max(dp[i-2]+nums[i] , dp[i-1]);
            dp[i-1] = max(dp[i-2],dp[i-1]);
        }
        return max(dp[dp.size()-1] , dp[dp.size()-2]);
    }
};



