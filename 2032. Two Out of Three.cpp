//https://leetcode.com/problems/two-out-of-three/description/
class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_map<int, int> map;
        vector<int> res;

        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> s2(nums2.begin(), nums2.end());
        unordered_set<int> s3(nums3.begin(), nums3.end());

        for(int n:s1) map[n]++;
        for(int n:s2) map[n]++;
        for(int n:s3) map[n]++;

        for(auto p:map){
            if(p.second >= 2){
                res.push_back(p.first);
            }
        }
        return res;
    }
};