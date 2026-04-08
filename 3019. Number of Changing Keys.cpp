//https://leetcode.com/problems/number-of-changing-keys/description/
class Solution {
public:
    int countKeyChanges(string s) {
        int count =0;
        for(char &c:s){
            c = tolower(c);
        }

        for(int i=1; i<s.size(); i++){
           if(s[i] != s[i-1]){
            count++;
           }
        }

        return count;
    }
};