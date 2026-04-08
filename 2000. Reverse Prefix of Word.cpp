//https://leetcode.com/problems/reverse-prefix-of-word/description/
class Solution {
public:
    string reversePrefix(string word, char ch) {
        int length = word.find(ch);
        if(length == string::npos){
            return word;
        }


        reverse(word.begin(), word.begin() + length + 1);
        return word;
    }
};