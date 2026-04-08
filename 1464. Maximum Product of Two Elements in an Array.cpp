//https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/description/
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int high = 0;
        int sum;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                sum = (nums[i] - 1) * (nums[j] - 1);
                high = max(sum, high);
            }
        }

        return high;
    }
};