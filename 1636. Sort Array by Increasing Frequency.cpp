//https://leetcode.com/problems/sort-array-by-increasing-frequency/description/
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> freq;

        // Count frequency of each number
        for (int n : nums) {
            freq[n]++;
        }

        // Sort with custom comparator
        sort(nums.begin(), nums.end(), [&](int a, int b) {
            if (freq[a] == freq[b]) {
                return a > b;        // same frequency → larger number first
            }
            return freq[a] < freq[b]; // smaller frequency first
        });

        return nums;
    }
};