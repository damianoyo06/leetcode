//https://leetcode.com/problems/maximum-gap/description/
class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int gap = 0;
        for(int i=1; i<nums.size(); i++){
            int newGap = nums[i] - nums[i-1];
            if(newGap > gap){
                gap = newGap;
            }
        }
        
        return gap;
    }
};