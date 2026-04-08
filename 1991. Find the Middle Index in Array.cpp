//https://leetcode.com/problems/find-the-middle-index-in-array/description/
class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int totalSum = 0;
        for(int num : nums) {
            totalSum += num;
        }

        int leftSum = 0;

        for(int i = 0; i < nums.size(); i++) {
            int rightSum = totalSum - leftSum - nums[i];

            if(leftSum == rightSum) {
                return i;
            }

            leftSum += nums[i];
        }

        return -1;
    }
};