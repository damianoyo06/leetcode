https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/description/
class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = 0;
        int digit = 0;
        for(int num:nums){
            sum += num;

            while(num > 0){
                digit += num % 10;
                num /= 10;
            }
        }

        int total = abs(sum - digit);

        return total;
    }
};