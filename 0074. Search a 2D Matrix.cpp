//https://leetcode.com/problems/search-a-2d-matrix/description/
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int left = 0, right = row * col - 1;

        while (left <= right) {
            int mid = left + ((right - left) / 2);
            int r = mid / col;
            int c = mid % col;

            if (target < matrix[r][c]) {
                right = mid - 1;
            } else if (target > matrix[r][c]) {
                left = mid + 1;
            } else {
                return true;
            }
        }
        return false;
    }
};
