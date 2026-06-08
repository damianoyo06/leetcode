//https://leetcode.com/problems/maximum-number-of-operations-with-the-same-score-i
class Solution {
public:
    int maxOperations(vector<int>& nums) {
        int count = 1;
        
        if (nums.size() == 2) return 1;
        
        int n = nums.size() -2;
        int sum = nums[0] + nums[1];
        int i = 2;
        while(i <= n){
    
            if(nums[i] + nums[i+1] == sum){
                count++;
                i += 2;
            } else {
                return count;
            }
        }

        return count;
    }
};