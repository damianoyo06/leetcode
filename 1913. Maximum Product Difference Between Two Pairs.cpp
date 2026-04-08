//https://leetcode.com/problems/maximum-product-difference-between-two-pairs/description/
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int low1 = nums[0];
        int low2 = nums[1];
        int high1 = nums[nums.size()-1];
        int high2 = nums[nums.size()-2];

      
        int lowSum = low1 * low2;
        int highSum = high1 * high2;
        int sum = highSum - lowSum;

        return sum;
    }
};