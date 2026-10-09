class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0, small =  prices[0];
        for(int price:prices){
            small = min(small,price);
            max_profit = max(max_profit, price - small);
        }
        return max_profit;
    }
};
