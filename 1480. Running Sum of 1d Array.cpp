//https://leetcode.com/problems/running-sum-of-1d-array/description/
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result;

        for (int i = 0; i < nums.size(); i++) {
            int sum = nums[0];
            int j = i;
            if (j != 0) {
                while (j > 0) {
                    sum += nums[j];
                    j--;
                }
            }

            result.push_back(sum);
        }

        return result;
    }
};