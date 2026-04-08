//https://leetcode.com/problems/delete-characters-to-make-fancy-string/description/
class Solution {
public:
    string makeFancyString(string s) {
        string result = "";
        for (char c : s) {
            result += c;
            int n = result.size();

            if (n >= 3 && result[n - 1] == result[n - 2] &&
                result[n - 2] == result[n - 3]) {
                result.pop_back();
            }
        }

        return result;
    }
};