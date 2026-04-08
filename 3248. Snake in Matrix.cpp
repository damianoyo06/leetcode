//https://leetcode.com/problems/snake-in-matrix/description/
class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int col = 0;
        int row = 0;
      
        for(string cmd: commands){
            if(cmd == "RIGHT"){
                col++;
            } else if (cmd == "LEFT"){
                col--;
            } else if (cmd == "UP"){
                row--;
            } else {
                row++;
            }
        }

      
        return row * n + col;
    }
};