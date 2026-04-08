//https://leetcode.com/problems/find-closest-number-to-zero/
class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int ans = INT_MAX;

        for (int i = 0; i < nums.size(); i++) {
            int current = nums[i];

            if (abs(current) < abs(ans) || 
               (abs(current) == abs(ans) && current > ans)) {
                ans = current;
            }
        }

        return ans;
    }
};