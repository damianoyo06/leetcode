//https://leetcode.com/problems/maximize-expression-of-three-elements/description/
class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int c = nums[0];
        int b = nums[nums.size()-1];
        int a = nums[nums.size()-2];

        int sum = a+b-c;
        return sum;
    }
};