//https://leetcode.com/problems/two-furthest-houses-with-different-colors/description/
class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int maxDist = 0;

        for (int i = 0; i < colors.size(); i++) {
            int currDist = 0;
            for (int j = i + 1; j < colors.size(); j++) {
                if (colors[j] != colors[i]) {
                    maxDist = max(maxDist, abs(i-j));
                }
            }
        }

        return maxDist;
    }
};