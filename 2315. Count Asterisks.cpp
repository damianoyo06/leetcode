//https://leetcode.com/problems/count-asterisks/description/
class Solution {
public:
    int countAsterisks(string s) {
        int count = 0;
         bool pair = false;

        for(char c:s){
           
            if(c == '|'){
                pair = !pair;
            } else if (c == '*' && !pair){
                count++;
            }
            
        }

        return count;
    }
};