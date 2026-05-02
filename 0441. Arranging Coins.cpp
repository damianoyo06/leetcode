//https://leetcode.com/problems/arranging-coins/description/
class Solution {
public:
    int arrangeCoins(int n) {
        int ans = 0;

        long long sum = 0;
        int i = 0;
        while(sum <= n){
            sum += i+1;
            i++;
            ans++;
        }

        if(sum == n) return ans;

        return ans -1;
    }
};