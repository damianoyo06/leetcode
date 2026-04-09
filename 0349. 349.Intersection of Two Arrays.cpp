//https://leetcode.com/problems/intersection-of-two-arrays/description/
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int l = 0;
        int r = 0;
        while(l < nums1.size() && r < nums2.size()){
            if(nums1[l] == nums2[r]){
                if (res.empty() || nums1[l] != res.back()) {
                    res.push_back(nums1[l]);
                }      
            l++;
            r++;
        }else if(nums1[l] > nums2[r]){
            r++;
        } else{
            l++;
        }
        }

        return res;
    }
};