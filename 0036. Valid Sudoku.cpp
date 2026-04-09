//https://leetcode.com/problems/valid-sudoku/description/
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<char>> row, col;
        map<pair<int, int>, unordered_set<char>> grid;

        for(int c=0; c<9; c++){
            for(int r=0; r<9; r++){
                if(board[r][c] == '.'){
                    continue;
                }

                if(row[r].count(board[r][c]) ||
                    col[c].count(board[r][c]) ||
                    grid[{r/3, c/3}].count(board[r][c])){
                        return false;
                    }

                    row[r].insert(board[r][c]);
                    col[c].insert(board[r][c]);
                    grid[{r/3, c/3}].insert(board[r][c]);
            }

        }

        return true;
    }
};