//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int m=0, n=prices.size(), minimum = INT_MAX;
       for(int i=0; i<n; i++){
        minimum = min(prices[i], minimum);
        m = max(m, (prices[i] - minimum));
       }

       return m;
    }
};