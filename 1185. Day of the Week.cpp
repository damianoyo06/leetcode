//https://leetcode.com/problems/day-of-the-week/description/
class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        vector<string> day_of_week = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        vector<int> months = {0,31,28,31,30,31,30,31,31,30,31,30,31};
        if(leapYear(year)){
            months[2] = 29;
        }

        int days = 4;

        for(int i=1971; i<year; i++){
            if(leapYear(i)){
                days+=366;
            } else {
                days+=365;
            }
        }

        for(int i=1; i<month; i++){
            days+= months[i];
        }

        days += day;

        return day_of_week[days % 7];

    }

     bool leapYear(int year){
        if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
            return true;
        }
        return false;
    }
};

