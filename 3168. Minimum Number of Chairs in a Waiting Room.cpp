//https://leetcode.com/problems/minimum-number-of-chairs-in-a-waiting-room/description/
class Solution {
public:
    int minimumChairs(string s) {
        int res = 0;
        int min = INT_MIN;

        for(int i =0; i<s.size(); i++){
            if(s[i] == 'E'){
                res++;
            } 

            if(s[i] == 'L'){
                res--;
            }

            min = max(res, min);
        }

        return min;
    }
};