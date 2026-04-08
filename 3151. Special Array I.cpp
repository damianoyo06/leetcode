//https://leetcode.com/problems/special-array-i/description/
class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        if(nums.size() < 2){
            return true;
        }

        for(int i=1; i<nums.size(); i++){
            int sum = nums[i] + nums[i-1];
            if(sum % 2 == 0){
                return false;
                break;
            }
        }

        return true;
    }
};