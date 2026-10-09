class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0, small = prices[0];
        for(int price:prices){
            max_profit = max(max_profit, price - small);
            small = min(small,price);
        }
        return max_profit;
    }
};
