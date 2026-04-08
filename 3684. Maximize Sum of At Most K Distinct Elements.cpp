//https://leetcode.com/problems/maximize-sum-of-at-most-k-distinct-elements/description/
class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        vector<int> ans;

        sort(nums.rbegin(), nums.rend());
        int n = nums.size();

        int i = 1;

        ans.push_back(nums[0]);
        k--;
        while(k > 0 && i < n){
            if(nums[i] != nums[i-1]){
                ans.push_back(nums[i]);
                k--;
            }
            i++;
        }
        return ans;
    }
};