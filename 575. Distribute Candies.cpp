//https://leetcode.com/problems/distribute-candies/description/
class Solution {
public:
    int distributeCandies(vector<int>& candyType) {

        int n = candyType.size();
        int maximum = 0;

        vector<int> types;

        for (int i : candyType) {
            if (maximum == n / 2)
                return maximum;

            if (find(types.begin(), types.end(), i) == types.end()) {
                types.push_back(i);
                maximum++;
            }
        }

        return types.size();
    }
};