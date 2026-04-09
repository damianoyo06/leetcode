//https://leetcode.com/problems/student-attendance-record-i/description/
class Solution {
public:
    bool checkRecord(string s) {
        int absent = 0;
        int lateCount = 0; // Tracks the current CONSECUTIVE streak
        
        for(char c : s) {
            if(c == 'A') {
                absent++;
                lateCount = 0; // Streak broken
            } else if (c == 'L') {
                lateCount++; // Streak continues
            } else {
                lateCount = 0; // Streak broken by 'P'
            }

           
            if(absent >= 2 || lateCount >= 3) {
                return false;
            }
        }
        
        return true;
    }
};