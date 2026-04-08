//https://leetcode.com/problems/minimum-moves-to-equal-array-elements-iii/description/
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max = *max_element(nums.begin(), nums.end());

        int moves = 0;

        for(int num:nums){
            moves += (max - num);
        }

        return moves;
    }
};