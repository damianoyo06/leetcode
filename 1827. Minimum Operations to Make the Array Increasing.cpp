//https://leetcode.com/problems/minimum-operations-to-make-the-array-increasing/description/
class Solution {
public:
    int minOperations(vector<int>& nums) {
        
        int count = 0;

        if(nums.size() < 2) return 0;

        for(int i=1; i<nums.size(); i++){
            while(nums[i-1] >= nums[i]){
                nums[i] += 1;
                count++;
            }
        }

        return count;
        
    }
};