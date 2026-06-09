//https://leetcode.com/problems/minimum-swaps-to-move-zeros-to-end/
class Solution {
public:
    int minimumSwaps(vector<int>& nums) {


        int count = 0;
        for(int num:nums){
            if(num == 0){
                count++;
            }
        }

        int n = nums.size()-count;
        for(int i=nums.size()-1; i>= n; i--){
            if(nums[i] == 0){
                count--;
            }
        }
        return count;
    }
};