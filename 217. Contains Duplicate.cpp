//https://leetcode.com/problems/contains-duplicate/description/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for(int num:nums){
            if(seen.count(num)){
                return true;
            }
            seen.insert(num);
        }
    return false;
    }
};