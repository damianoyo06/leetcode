//https://leetcode.com/problems/maximum-value-of-an-ordered-triplet-i/description/?envType=problem-list-v2&envId=vtvcs60s
class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long max_i = 0;
        long long max_diff = 0;
        long long result = 0;

        for (int k = 0; k < nums.size(); k++) {
            result = max(result, max_diff * nums[k]);
            max_diff = max(max_diff, max_i - nums[k]);
            max_i = max(max_i, (long long)nums[k]);
        }

        return result;
    }
};