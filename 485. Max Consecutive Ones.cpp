//https://leetcode.com/problems/max-consecutive-ones/description/
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int con = 0;
        int current = 0;
        
        for(int i=0; i<nums.size(); i++){
            
            if(nums[i] == 1){
                current++;
            } else{
                current = 0;
            }

            con = max(con, current);
        }

        return con;
    }
};