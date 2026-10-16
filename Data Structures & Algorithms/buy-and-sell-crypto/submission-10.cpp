class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int low = prices[0];
        for(int n:prices){
            ans = max(ans, n-low);
            low = min(n, low);
        }
        return ans;
    }
};
