//https://leetcode.com/problems/the-two-sneaky-numbers-of-digitville/description/
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int, int> m;
        vector<int> res;

        for(int i=0; i<nums.size(); i++){
            if(m.find(nums[i]) != m.end()){
                res.push_back(nums[i]);
            }
           m[nums[i]]++;
        }

        return res;
    }
};