//https://leetcode.com/problems/day-of-the-year/description/
class Solution {
public:
    int dayOfYear(string date) {
        vector<int> monthDays = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};

        int month = stoi(date.substr(5,2));
        int day = stoi(date.substr(8,2));
        int year = stoi(date.substr(0,4));

        

        int ans = 0;
        for(int i = 0; i<month-1; i++){
            ans += monthDays[i];
        }

        ans += day;

        if(year % 4 == 0 && month > 2 && year != 1900){
            ans += 1;
        }
        return ans;

    }
};