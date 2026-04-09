//https://leetcode.com/problems/squares-of-a-sorted-array/description/
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
      vector<int> squared;
        for(int num:nums){
            squared.push_back(num*num);
        }
        
        sort(squared.begin(), squared.end());
        return squared;
    }
};