//https://leetcode.com/problems/count-commas-in-range-ii/description/
class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;
        long long p = 1000;

        while (p <= n) {
            ans += n - p + 1;
            p *= 1000;
        }

        return ans;
    }
};