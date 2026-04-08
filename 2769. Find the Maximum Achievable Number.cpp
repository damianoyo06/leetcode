//https://leetcode.com/problems/find-the-maximum-achievable-number/description/
class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        int ans = 0;
        if(num >= 0){
            ans = num + t*2;
        } else{
            ans = num - t*2;
        }

        return ans;
    }
};