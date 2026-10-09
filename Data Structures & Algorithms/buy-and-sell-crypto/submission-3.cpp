class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int small =  prices[0];
        for(int i = 1 ; i < prices.size() ; i++){
            small = min(small,prices[i]);
            max_profit = max(max_profit, prices[i] - small);
        }
        return max_profit;
    }
};
