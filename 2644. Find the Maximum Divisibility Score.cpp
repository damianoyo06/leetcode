//https://leetcode.com/problems/find-the-maximum-divisibility-score/description/
class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int maxCount = -1; // highest number of divisible numbers
        int resultDiv = INT_MAX; // smallest divisor in case of tie

        for (int divide : divisors) {
            int currentCount = 0;
            for (int num : nums) {
                if (num % divide == 0) {
                    currentCount++;
                }
            }

            if (currentCount > maxCount) {
                maxCount = currentCount;
                resultDiv = divide;
            } else if (currentCount == maxCount) {
                resultDiv = min(resultDiv, divide); // choose smallest divisor
            }
        }

        return resultDiv;
    }
};
