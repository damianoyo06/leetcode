//https://leetcode.com/problems/apply-operations-to-an-array/description/
class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1]){
                nums[i-1] *= 2;
                nums[i] = 0;
            }
        }

        int insertPos = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[insertPos++] = nums[i];
            }
        }

        while (insertPos < nums.size()) {
            nums[insertPos++] = 0;
        }

        return nums;
    }
};