//https://leetcode.com/problems/first-matching-character-from-both-ends/description/
class Solution {
public:
    int firstMatchingIndex(string s) {
        int l = 0;
        int r = s.size() - 1;

        while (l <= r) {
            if (s[l] == s[r]) {
                return l;
            } else {

                l++;
                r--;
            }
        }

        return -1;
    }
};