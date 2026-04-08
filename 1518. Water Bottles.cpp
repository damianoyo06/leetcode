//https://leetcode.com/problems/water-bottles/description/
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total = 0;
        int reminder = 0;
        int empty = 0;

        while(numBottles > 0){
            total += numBottles;
            empty = numBottles + reminder;
            numBottles = empty / numExchange;
            reminder = empty % numExchange;
        }

        return total;
    }
};