//https://leetcode.com/problems/form-smallest-number-from-two-digit-arrays/description/
class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        int digit = INT_MAX;
        int ans = 0;
        bool equal = false;
        for (int i = 0; i < nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j] && nums1[i] < digit) {
                    digit = nums1[i];
                    equal = true;
                }
            }
            ans = digit;
        }

        if (!equal) {

            sort(nums1.begin(), nums1.end());
            sort(nums2.begin(), nums2.end());

            if (nums1[0] < nums2[0]) {
                ans = nums1[0] * 10 + nums2[0];
            } else {
                ans = nums2[0] * 10 + nums1[0];
            }
        }

        return ans;
    }
};