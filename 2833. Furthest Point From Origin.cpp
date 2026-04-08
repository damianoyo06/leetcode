//https://leetcode.com/problems/furthest-point-from-origin/description/
class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int left = 0;
        int right = 0;
        int extra = 0;
        int total = 0;


        for(char move:moves){
            if(move == 'L'){
                left++;
            } else if(move == 'R'){
                right++;
            } else{
                extra++;
            }
        }

         total = extra + abs(right-left);


        return total;

    }
};