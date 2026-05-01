//https://leetcode.com/problems/shuffle-string/description/
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans = "";
        int n = 0;
        while (n < s.size()) {
            for (int i = 0; i < indices.size(); i++) {
                if (indices[i] == n) {
                    ans += s[i];
                    n++;
                }
            }
        }
         return ans;
    }
};