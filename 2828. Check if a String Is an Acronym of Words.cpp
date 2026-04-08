//https://leetcode.com/problems/check-if-a-string-is-an-acronym-of-words/description/
class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        if(words.size() != s.size()){
            return false;
        }

        string check = "";
        for(int i=0; i<words.size(); i++){
            //alice , bob
            string temp = words[i];
            char c = temp[0];
            check.push_back(c);
            
        }

        return check == s;
    }
};