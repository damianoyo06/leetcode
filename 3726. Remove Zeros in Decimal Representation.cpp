//https://leetcode.com/problems/remove-zeros-in-decimal-representation/description/
class Solution {
public:
    long long removeZeros(long long n) {
       long long ans=0, t=1;

       while(n>0){
        if(n%10 != 0){
            ans = ans + (n%10) *t;
            t = t*10;
        }

        n /= 10;
       }
        return ans;
    }
};