//https://leetcode.com/problems/check-if-grid-satisfies-conditions/description/
class Solution {
public:
    bool satisfiesConditions(vector<vector<int>>& grid) {
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {

                if (i > 0 && grid[i][j] != grid[i - 1][j]) {
                    return false;
                }

                if (j > 0 && grid[i][j] == grid[i][j - 1]) {
                    return false;
                }
            }
        }
        return true;
    }
};