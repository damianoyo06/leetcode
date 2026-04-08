//https://leetcode.com/problems/neither-minimum-nor-maximum/description/
class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int min = nums[0];
        int n = nums.size()-1;
        int max = nums[n];

        for(int i=0; i<nums.size(); i++){
            if(nums[i] != min && nums[i] != max){
                return nums[i];
            }
        }

        return -1;
    }
};