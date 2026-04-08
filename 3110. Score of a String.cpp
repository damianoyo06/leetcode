//https://leetcode.com/problems/score-of-a-string/description/
class Solution {
public:
    int scoreOfString(string s) {
        int sum = 0;

        for(int i=1; i<s.size(); i++){
            int digit = abs((s[i-1] - '0') - (s[i] - '0'));

            sum += digit;
        }

        return sum;
    }
};