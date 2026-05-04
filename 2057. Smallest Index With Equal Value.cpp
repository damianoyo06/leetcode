//https://leetcode.com/problems/smallest-index-with-equal-value/
class Solution {
public:
    int smallestEqual(vector<int>& nums) {
       int i = 0;
       for(int& num:nums){
            if(num % 10 == i%10 ){             
                return i;
            }
            i++;
       }

       return -1;
    }
};