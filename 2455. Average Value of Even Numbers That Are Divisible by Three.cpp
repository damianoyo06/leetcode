//https://leetcode.com/problems/average-value-of-even-numbers-that-are-divisible-by-three/description/
class Solution {
public:
    int averageValue(vector<int>& nums) {
        int count = 0;
        int average = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] % 2 == 0 && nums[i] % 3 == 0){
                count += nums[i];
                average++;
            }
        }

        if(count == 0) return 0;

        count = count / average;
        return count;
    }
};