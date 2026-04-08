//https://leetcode.com/problems/calculate-money-in-leetcode-bank/description/
class Solution {
public:
    int totalMoney(int n) {

        int ans = 0;
        int weekStart = 1;

        for (int i = 0; i < n; i++) {
            ans += weekStart + (i % 7);
            if (i % 7 == 6) {
                weekStart++;
            }
        }

        return ans;
    }
};