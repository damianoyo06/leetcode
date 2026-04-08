//https://leetcode.com/problems/maximum-difference-between-adjacent-elements-in-a-circular-array/description/
class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n = nums.size();
        int maxDiff = abs(nums[1] - nums[0]);

        for(int i=1; i<n; i++){
            int current = abs(nums[i] - nums[i-1]);

            maxDiff = max(current, maxDiff);
        }

        return maxDiff;
    }
};