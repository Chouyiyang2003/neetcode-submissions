class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxpro = 0;
        int small = prices[0];
        for(int i = 1 ; i < prices.size() ; i++){
            maxpro = max(maxpro, prices[i] - small);
            small = min(small, prices[i]);
        }
        return maxpro;
    }
};
