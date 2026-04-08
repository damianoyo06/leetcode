//https://leetcode.com/problems/smallest-index-with-digit-sum-equal-to-index/description/
class Solution {
public:
    int smallestIndex(vector<int>& nums) {

        for(int i=0; i<nums.size(); i++){
            int number = nums[i];
            int digit = 0;
            while(number > 0){
                digit += number % 10;
                number /= 10;
            }

            if(i == digit){
                return i;
            }
        }

        return -1;
    }
};