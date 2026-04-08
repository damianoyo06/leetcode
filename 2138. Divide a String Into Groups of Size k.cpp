//https://leetcode.com/problems/divide-a-string-into-groups-of-size-k/description/
class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> res;
        int count = 0;
        string word = "";

        for (int i = 0; i < s.size(); i++) {
            word += s[i];
            count++;

            if (count == k) {
                count = 0;
                res.push_back(word);
                word = "";
            }
        }

        int n = s.size();

        if (n % k == 0) {
            return res;
        } else {
            while (word.size() < k) {
                word += fill;
            }
            res.push_back(word);
        }

        return res;
    }
};