//https://leetcode.com/problems/check-if-numbers-are-ascending-in-a-sentence/description/
class Solution {
public:
    bool areNumbersAscending(string s) {
        int prev = 0, num = 0;
        bool building = false;

        for (char c : s) {
            if (isdigit(c)) {
                num = num * 10 + (c - '0');
                building = true;
            } else {
                if (building) {
                    if (num <= prev) return false;
                    prev = num;
                    num = 0;
                    building = false;
                }
            }
        }

        if (building && num <= prev) return false;

        return true;
    }
};