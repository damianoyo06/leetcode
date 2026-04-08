//https://leetcode.com/problems/minimum-operations-to-exceed-threshold-value-i/description/
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
       // sort(nums.begin(), nums.end());
        int ans = 0;
        for(int num:nums){
            if(num < k ){
                ans++;
            }
        }

        return ans;
    }
};