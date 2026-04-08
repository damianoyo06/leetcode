//https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/description/
class Solution {
public:
    double average(vector<int>& salary) {
        int min = INT_MAX;
        int max = INT_MIN;
        double average = 0;

        for(int i=0; i<salary.size(); i++){
            if(salary[i] > max){
                max = salary[i];
            }
            if(salary[i] < min){
                min = salary[i];
            }

            average += salary[i];
        }

        int n = salary.size()-2;
        average = average - min - max;
        average = average / n;

        return average;
    }
};