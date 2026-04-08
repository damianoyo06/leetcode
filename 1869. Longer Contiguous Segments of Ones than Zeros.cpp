//https://leetcode.com/problems/longer-contiguous-segments-of-ones-than-zeros/description/
class Solution {
public:
    bool checkZeroOnes(string s) {
        int maxZero = 0;
        int maxOne = 0;

        int zero = 0;
        int one = 0;

        for(char c:s){
            if(c == '1'){
                zero = 0;
                one++;
            } else {
                one = 0;
                zero++;
            }
            maxZero = max(maxZero, zero);
            maxOne = max(maxOne, one);
        }

        return maxOne > maxZero;
    }
};