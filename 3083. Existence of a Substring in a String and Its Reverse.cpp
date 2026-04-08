//https://leetcode.com/problems/existence-of-a-substring-in-a-string-and-its-reverse/description/
class Solution {
public:
    bool isSubstringPresent(string s) {
        string temp = s;
        reverse(begin(temp), end(temp));
       //s.substr(i, 2) == s.substr(x, 2)

       for(int i=0; i<s.length()-1; i++){
        string sub = s.substr(i, 2);
        if(temp.find(sub) !=string::npos) return true;
       }

        return false;
    }
};