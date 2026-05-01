//https://leetcode.com/problems/maximum-difference-between-increasing-elements/description/
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxDiff = 0;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                int curDiff = nums[j] - nums[i];
                if(curDiff > maxDiff){
                    maxDiff = curDiff;
                }
            }
        }

        if(maxDiff <= 0) return -1;

        return maxDiff;
    }
};