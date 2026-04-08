//https://leetcode.com/problems/robot-return-to-origin/description/
class Solution {
public:
    bool judgeCircle(string moves) {
        vector<int> plane = {0, 0};

        for (char move : moves) {
            if (move == 'U') {
                plane[0]++;
            } else if (move == 'D') {
                plane[0]--;
            } else if (move == 'L') {
                plane[1]--;
            } else if (move == 'R') {
                plane[1]++;
            }
        }

        if (plane == vector<int>{0, 0}) {
            return true;
        }

        return false;
    }
};