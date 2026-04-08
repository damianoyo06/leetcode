//https://leetcode.com/problems/determine-color-of-a-chessboard-square/description/
class Solution {
public:
    bool squareIsWhite(string coordinates) {
        char c = coordinates[0];
        int num = coordinates[1] - '0';
        int sum = c + num;

        if(sum % 2 == 0){
            return false;
        }

        return true;
    }
};