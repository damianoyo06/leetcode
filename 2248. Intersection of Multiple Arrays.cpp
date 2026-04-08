//https://leetcode.com/problems/intersection-of-multiple-arrays/description/
class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int, int> map;
        for(auto& vec:nums){
            for(int num:vec){
                map[num]++;
            }
        }

        vector<int> res;
        for(auto& p:map){
            if(p.second == nums.size()){
                res.push_back(p.first);
            }
        }

        sort(res.begin(), res.end());
        return res;
    }
};