//https://leetcode.com/problems/count-elements-with-strictly-smaller-and-greater-elements/description/
class Solution {
public:
    int countElements(vector<int>& nums) {
        int count = 0;

        int i=0;
        int j=0;
        while(i<nums.size()){
            int smaller = 0;
            int greater = 0;
            for(int j=0; j<nums.size(); j++){
                if(i==j) continue;
                if(nums[i] > nums[j]){
                    greater++;
                }
                if(nums[i] < nums[j]){
                    smaller++;
                }
            }

            if(smaller > 0 && greater > 0){
                count++;
            }

            i++;
        }

        return count;
    }
};