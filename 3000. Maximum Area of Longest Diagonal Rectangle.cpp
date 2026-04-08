//https://leetcode.com/problems/maximum-area-of-longest-diagonal-rectangle/description/
class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int area = 0;
        long long current = 0;
        for(int i=0; i<dimensions.size(); i++){
            int a = dimensions[i][0];
            int b = dimensions[i][1];
            long long diagonal = 1LL * a * a + 1LL + b * b;

            int curArea = a * b;

            if (diagonal > current || (diagonal == current && curArea > area)) {
                current = diagonal;
                area = curArea;
            }
        }

        return area;
    }
};