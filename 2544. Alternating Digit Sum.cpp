//https://leetcode.com/problems/alternating-digit-sum/
class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int> digits;
        while (n > 0) {
            int digit = n;
            digit %= 10;
            digits.push_back(digit);

            n /= 10;
        }

        bool pos = true;
        int ans = 0;
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (pos) {
                ans += digits[i];
                pos = false;
            } else {
                ans -= digits[i];
                pos = true;
            }
        }

        return ans;
    }
};