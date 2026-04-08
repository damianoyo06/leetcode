//https://leetcode.com/problems/minimum-distance-between-three-equal-elements-i/description/
class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int sum = INT_MAX;
        if(nums.size() < 3) return -1;
        for(int i=0; i<nums.size()-2; i++){
            for(int j=i+1; j<nums.size() - 1; j++){
                for(int k = j+1; k<nums.size(); k++){
                    if(nums[j] == nums[k] && nums[k] == nums[i]){
                        sum = min(sum, 
                        abs(j-i) + abs(k-j) + abs(k-i));
                    }
                }
            }
        }

         if(sum == INT_MAX)  return -1;
         return sum;
    }
};