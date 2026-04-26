//https://leetcode.com/problems/longest-even-odd-subarray-with-threshold/description/
class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int ans = 0;
        
        for(int i=0; i<nums.size(); i++){
            int current = 0;
            if(nums[i] % 2 == 0 && (nums[i] <=threshold)){
                current = 1;
                for(int j=i+1; j<nums.size(); j++){
                    if((nums[j] % 2 == nums[j-1] % 2) || nums[j] > threshold) break;
                    current++;
                }
            }

            ans = max(ans, current);
        }
        return ans;
    }
};