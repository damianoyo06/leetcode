//https://leetcode.com/problems/earliest-time-to-finish-one-task/description/
class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int ans = INT_MAX;

        for(int i=0; i<tasks.size(); i++){
            int current = tasks[i][1] + tasks[i][0];

            if(current < ans){
                ans = current;
            }
        }

        return ans;
    }
};