//https://leetcode.com/problems/find-valid-pair-of-adjacent-digits-in-string/description/
class Solution {
public:
    string findValidPair(string s) {
        
        string ans;
        int freq[10] = {0};
        for(char c: s){
            freq[c - '0']++;
        }

        for(int i=0; i<s.size()-1; i++){
            char a = s[i];
            char b = s[i+1];

            if(a != b && freq[a - '0'] == (a - '0') && freq[b - '0'] == (b - '0')){
                ans = "";
                  ans += a;
            ans += b;
            return ans;
            }
     
          
        }

        return "";
    }
};