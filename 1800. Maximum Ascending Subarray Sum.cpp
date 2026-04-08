//https://leetcode.com/problems/maximum-ascending-subarray-sum/description/
class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int sum = nums[0];
        int add = nums[0];
        for(int i=1; i<nums.size(); i++){
            
            if(nums[i] > nums[i-1]){
                add += nums[i];
            } else {
                add = nums[i];
            }
            sum = max(sum, add);
        }
        return sum;


    }
};