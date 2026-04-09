//https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/description/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int current = 0;

        for(int i=0; i<nums.size() -1; i++){ //i =0
           
            if(nums[i] == nums[i+1]){ //0 = i1 = 0
                current ++; // current = 1

                if( current > 1){
                    nums.erase(nums.begin() + i +1);
                    i--;
                } 
            } else {
                current = 0;
            }
        }
        return nums.size();
    }
};