//https://leetcode.com/problems/count-integers-with-even-digit-sum/description/
class Solution {
public:
    int countEven(int num) {
        int sum = 0;

        for(int i = 1; i<=num; i++){
           int digitSum = 0;
           int temp = i;
           while(temp > 0){
            digitSum += temp%10;
            temp = temp/10;
           }

           if(digitSum%2==0){
            sum++;
           }
        }

        return sum;
    }
};