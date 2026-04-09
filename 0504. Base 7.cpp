//https://leetcode.com/problems/base-7/description/
class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) return "0";

        bool isNegative = num < 0;
        num = abs(num);

        string sum = "";

        while (num > 0) {
            int digit = num % 7;
            sum.push_back('0' + digit);
            num /= 7;
        }

        reverse(sum.begin(), sum.end());

        if (isNegative) {
            sum = "-" + sum;
        }

        return sum;
    }
};
