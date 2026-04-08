//https://leetcode.com/problems/consecutive-characters/description/
class Solution {
public:
    int maxPower(string s) {
        int res = 1;
        int con = 1;
        for(int i=1; i<s.size(); i++){
            if(s[i] == s[i-1]){
                con++;
            } else {
                con = 1;
            }

            res = max(con, res);
        }

        return res;
    }
};