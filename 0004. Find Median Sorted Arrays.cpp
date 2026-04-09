//https://leetcode.com/problems/median-of-two-sorted-arrays/description/
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       nums1.insert(nums1.end(), nums2.begin(), nums2.end());
       sort(nums1.begin(), nums1.end());
       int n = nums1.size();
       int mid = n/2;
       double median = 0.0;

    if(n % 2 == 1){
        median = nums1[mid];
    } else {
        median = (nums1[mid] + nums1[mid-1]) / 2.0;
    }

    return median;
    }
};