//https://leetcode.com/problems/sum-of-unique-elements/description/
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> map;
        int sum = 0;
        for(int num:nums){
            map[num]++;
        }

        for(auto i:map){
            if(i.second == 1){
                sum += i.first;
            }
        }

        return sum;
    }
};