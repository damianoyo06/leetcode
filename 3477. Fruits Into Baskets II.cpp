//https://leetcode.com/problems/fruits-into-baskets-ii/description/
class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = baskets.size();
        vector<bool> used(n, false);
        int unplaced = 0;

        for (int i = 0; i < fruits.size(); i++) {
            bool placed = false;

            for (int j = 0; j < n; j++) {
                if (!used[j] && fruits[i] <= baskets[j]) {
                    used[j] = true;
                    placed = true;
                    break;
                }
            }

            if (!placed)
                unplaced++;
        }

        return unplaced;
    }
};
