//https://leetcode.com/problems/find-the-highest-altitude/description/
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int high = 0;

        int current = 0;
        for(int i: gain){
            current += i;
            if(current > high){
                high = current;
            }
        }

        return high;
    }
};