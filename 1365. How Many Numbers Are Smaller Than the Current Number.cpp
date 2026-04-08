//https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/description/
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> smaller;
        for(int i=0; i<nums.size(); i++){
            int count = 0;
            for(int j=0; j<nums.size(); j++){
                if(j == i){
                    continue;
                } else if(nums[i] > nums[j]){
                    count++;
                }
            }
            smaller.push_back(count);
        }

        return smaller;
    }
};