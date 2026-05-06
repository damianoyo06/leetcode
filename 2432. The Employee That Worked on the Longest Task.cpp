//https://leetcode.com/problems/the-employee-that-worked-on-the-longest-task/description/
class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        int time = logs[0][1]; // duration from 0
        int id = logs[0][0];
        int prev = logs[0][1];

        for(int i = 1; i < logs.size(); i++){
            int currentTime = logs[i][1] - prev;

            if(currentTime > time || 
              (currentTime == time && logs[i][0] < id)){
                time = currentTime;
                id = logs[i][0];
            }

            prev = logs[i][1];
        }

        return id;
    }
};