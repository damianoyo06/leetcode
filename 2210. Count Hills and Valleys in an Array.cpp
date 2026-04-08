//https://leetcode.com/problems/count-hills-and-valleys-in-an-array/description/
class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int result = 0;
        int left = 0;

      for(int i =1; i<nums.size() -1; i++)
      {
        if(nums[i] != nums[i+1]){
            if(nums[i] > nums[left] && nums[i] > nums[i + 1] ||
            nums[i] < nums[left] && nums[i] < nums[i+1]){
                result++;
            }
            left = i;
        }
      }

      return result;
    }
};