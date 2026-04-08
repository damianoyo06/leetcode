//https://leetcode.com/problems/ant-on-the-boundary/description/
class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int num = 0;
        bool positive = false;
        int count = 0;

        for(int i=0; i<nums.size(); i++){
           
            if(i == 0) positive = true;
             num += nums[i];
            if(num == 0 && positive == true){
                count++;
            }

        }


        return count;
        
    }
};