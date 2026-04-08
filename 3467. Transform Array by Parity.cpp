//https://leetcode.com/problems/transform-array-by-parity/description/
class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        
        vector<int> res;
        for(int num:nums){
            if(num % 2 == 0){
                num = 0;
            } else {
                num = 1;
            }
            res.push_back(num);
        }

        sort(res.begin(), res.end());

        return res;
    }
};