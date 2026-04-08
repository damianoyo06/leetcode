//https://leetcode.com/problems/check-if-string-is-a-prefix-of-array/description/
class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string check = "";

        for(int i=0; i<words.size(); i++){
            check = check + words[i];

            if(check == s){
                return true;
            }
        }

        return false;
    }
};