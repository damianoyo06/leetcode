//https://leetcode.com/problems/count-partitions-with-even-sum-difference/description/
class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int left = 0;
        int count = 0;

        for (int i = 0; i < nums.size() - 1; i++) {
            left += nums[i];
            int right = 0;
            for (int j = i + 1; j < nums.size(); j++) {
                right += nums[j];
            }

            int difference = left - right;
            if (difference % 2 == 0) {
                count++;
            }
        }

        return count;
    }
};