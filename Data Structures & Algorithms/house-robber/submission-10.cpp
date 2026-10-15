class Solution {
public:
    int rob(vector<int>& nums) {
        int prev1=0;
        int prev2=0;
        int ans = 0;
        for (int n:nums){
            ans = max(prev2+n, prev1);
            prev2 = prev1;
            prev1 = ans;

        }

        return prev1;
    }
};
