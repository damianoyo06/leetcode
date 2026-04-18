//https://leetcode.com/problems/decrypt-string-from-alphabet-to-integer-mapping/description/
class Solution {
public:
    string freqAlphabets(string s) {
        string ans = {};
        for(int i=s.size()-1; i>=0; i--){
            if(s[i] == '#'){
                i-=2;
                ans += 'a' + stoi(s.substr(i, 2)) - 1;
            } else {
                ans += 'a' + (s[i] - '1');
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};