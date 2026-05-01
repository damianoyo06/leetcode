//https://leetcode.com/problems/check-if-binary-string-has-at-most-one-segment-of-ones/description/
class Solution {
public:
    bool checkOnesSegment(string s) {
        bool firstOne = false;
        bool seen = false;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '1'){
                firstOne = true;
            }

            if(firstOne == true && s[i] == '0'){
                seen = true;
            }

            if(firstOne == true && seen == true && s[i] == '1'){
                return false;
            }
        }

        return true;
    }
};