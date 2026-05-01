//https://leetcode.com/problems/final-array-state-after-k-multiplication-operations-i/description/
class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while (k > 0) {
            auto it = std::min_element(nums.begin(), nums.end());
            *it *= multiplier;
            k--;
        }
        return nums;
    }
};