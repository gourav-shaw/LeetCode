class Solution {
public:
    int maxProfit(vector<int>& prices) {
    if (prices.empty()) return 0;
    int minPrice = numeric_limits<int>::max();
    int maxProfit = 0;
    for (int price : prices) {
        if (price < minPrice) minPrice = price;
        int profit = price - minPrice;
        if (profit > maxProfit) maxProfit = profit;
    }
    return maxProfit;
    }
};