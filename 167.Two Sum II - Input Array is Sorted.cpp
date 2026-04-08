// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> map;
       
       for(int i=0; i<numbers.size(); i++){
        int complement = target - numbers[i];

        if(map.count(complement)){
            return {map[complement] + 1, i + 1};
        }

        map[numbers[i]] = i;
       }
       return {};
    }
    
};