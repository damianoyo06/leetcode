//https://leetcode.com/problems/maximum-sum-with-exactly-k-elements/description/
class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int sum = 0;
        while(k >0){
            int i = nums.size()-1;
            sum += nums[i];
            nums[i] += 1;
            k--;
        }

        return sum;
    }
};