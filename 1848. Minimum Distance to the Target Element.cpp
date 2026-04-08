//https://leetcode.com/problems/minimum-distance-to-the-target-element/description/
class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
       int minDist = INT_MAX;
        for(int i=0; i<nums.size(); i++){
            if(target == nums[i]){
                minDist = min(minDist, abs(i - start));
            }
        }

        return minDist;
    }
};