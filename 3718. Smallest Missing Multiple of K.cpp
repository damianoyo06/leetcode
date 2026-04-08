//https://leetcode.com/problems/smallest-missing-multiple-of-k/description/
class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end());

        bool found = false;
        int i = 1;
        while(!found){
            if(find(nums.begin(), nums.end(), k*i) == nums.end()){
                found = true;
                return k*i;
            } else {
                i++;
            }

        }
        return -1;
    }
};