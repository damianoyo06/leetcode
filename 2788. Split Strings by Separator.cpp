//https://leetcode.com/problems/split-strings-by-separator/description/
class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> ans;
        string word = "";
        
        for (const string& sentence : words) {
            for (char c : sentence) {
                if (c == separator) {
                    if (!word.empty()) {
                        ans.push_back(word);
                        word = "";
                    }
                } else {
                    word += c;
                }
            }
            
            
            if (!word.empty()) {
                ans.push_back(word);
                word = "";
            }
        }

        return ans;
    }
};