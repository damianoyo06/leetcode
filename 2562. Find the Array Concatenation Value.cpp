//https://leetcode.com/problems/find-the-array-concatenation-value/description/
class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long ans = 0;
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            if (left == right) {
                ans += nums[left];
            } else {
                int temp = nums[right];
                int digits = 1;
                while (temp >= 10) {
                    temp /= 10;
                    digits *= 10;
                }
                digits *= 10;

                ans += nums[left] * digits + nums[right];
            }
            left++;
            right--;
        }

        return ans;
    }
};