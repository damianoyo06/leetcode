//https://leetcode.com/problems/pass-the-pillow/description/
class Solution {
public:
    int passThePillow(int n, int time) {
        int ans = 0;
        bool positive = true;
        while(time >=0){
            
            if(ans == 1){
                positive = true;
            } else if (ans == n){
                positive = false;
            }

            if(positive){
                ans++;
            } else {
                ans--;
            }
            time--;
        }

        return ans;
    }
};