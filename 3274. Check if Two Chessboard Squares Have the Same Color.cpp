//https://leetcode.com/problems/check-if-two-chessboard-squares-have-the-same-color/description/
class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        int left = 0;
        int right = 0;
        for(char c:coordinate1){
            left += c  - '0';
        }

        for(char c:coordinate2){
            right += c - '0';
        }

        left = left % 2;
        right = right %2;
        
        return left == right;
    }
};