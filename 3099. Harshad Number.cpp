//https://leetcode.com/problems/harshad-number/description/
class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0;
        int target = x;
        while(x != 0){
            int m = x % 10; //18%10 = 8
            sum+= m; //8 + 1 = 9
            x /= 10; //18/10 = 1 1/10 = 0

        }

        if(target % sum == 0){
            return sum;
        }

        return -1;
    }
};