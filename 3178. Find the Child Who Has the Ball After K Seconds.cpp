//https://leetcode.com/problems/find-the-child-who-has-the-ball-after-k-seconds/description/
class Solution {
public:
    int numberOfChild(int n, int k) {
       int cycle = 2 * (n - 1);
        k %= cycle;

        if (k < n) {
            return k;
        } else {
            return cycle - k;
        }
    }
};