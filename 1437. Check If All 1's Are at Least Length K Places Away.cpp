//https://leetcode.com/problems/check-if-all-1s-are-at-least-length-k-places-away/
class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {

        int i=0; 
        while(i < nums.size() && nums[i] != 1){
            i++;
        }
        int x1 = i;
        int diff = 0;

        for(int i=x1+1; i<nums.size(); i++){
            if(nums[i] == 1){
                diff = i - x1;
                if(i - x1 - 1 < k){
                    return false;
                }
                x1 = i;
            }
        }

        return true;
    }
};