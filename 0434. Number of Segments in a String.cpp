//https://leetcode.com/problems/number-of-segments-in-a-string/description/
class Solution {
public:
    int countSegments(string s) {
        int ans = 0;
        bool sentance = false;
        for(int i=0; i<s.size(); i++){
            if(!sentance && s[i] != ' '){
                ans++;
                sentance = true;
            }

            if(s[i] == ' '){
                sentance = false;
            }
        }

        return ans;
    }
};