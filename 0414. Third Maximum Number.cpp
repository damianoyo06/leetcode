//https://leetcode.com/problems/third-maximum-number/description/
class Solution {
public:
    int thirdMax(vector<int>& nums) {
         sort(nums.rbegin(), nums.rend());
        int res = nums[0];
        int count = 1;
        for(int i=1; i<nums.size(); i++){
          
            if(nums[i] != nums[i -1]){
                count++;
                res = nums[i];
            }
            
            if(count == 3){
                return res;
            }
        }
        
        return nums[0];
    }
};