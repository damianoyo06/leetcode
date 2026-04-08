//https://leetcode.com/problems/length-of-last-word/description/
class Solution {
public:
    int lengthOfLastWord(string s) {
        int e = s.size()-1;
        
        while(e >=0 && s[e] == ' '){
            e -= 1;
        }

        int start = e;
        while( start >= 0 && s[start] != ' '){
            start -= 1;
        }

        return e-start;
        
    }
};