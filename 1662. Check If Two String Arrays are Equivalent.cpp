//https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/description/
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string sent1 = "";
        string sent2 = "";

        for (int i = 0; i < word1.size(); i++) {
            sent1 += word1[i];
        }

        for (int i = 0; i < word2.size(); i++) {
            sent2 += word2[i];
        }

        return sent1 == sent2;
    }
};