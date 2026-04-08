//https://leetcode.com/problems/make-array-zero-by-subtracting-equal-amounts/description/
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count = 0;
        int subtract = 0;
        while(nums.size() > 0){
            nums.erase(remove(nums.begin(), nums.end(), 0), nums.end());

            if(nums.size() < 1){
                return count;
            }

            subtract = nums[0];
            for(int i=0; i<nums.size(); i++){
                nums[i] -= subtract;
            }
           
            count++;

        }

        return count;
    }
};
