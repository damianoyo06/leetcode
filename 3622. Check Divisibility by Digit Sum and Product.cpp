//https://leetcode.com/problems/check-divisibility-by-digit-sum-and-product/description/
class Solution {
public:
    bool checkDivisibility(int n) {
        
        int original = n;
        int product = 1;
        int sum = 0;
        while(n > 0){
            int digits = n%10;
            product *= digits;
            sum += digits;
            n = n/10;
        }

        int total = sum + product;

        if(total == 0) return false;
       
        return original % total == 0;
    }
};