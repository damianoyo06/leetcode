//https://leetcode.com/problems/count-the-digits-that-divide-a-number/description/
class Solution {
public:
    int countDigits(int num) {
        
        int count = 0;
        int x = num;

        while(x!=0){
            int rem = x % 10; //7%10 = 7
            if(rem != 0 && num % rem == 0){
                count++;
            }
            x /= 10;
        }

        return count;
    }
};