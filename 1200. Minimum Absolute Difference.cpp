//https://leetcode.com/problems/minimum-absolute-difference/description/
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int min = INT_MAX;
        vector<vector<int>> pair;

       for(int i=1; i<arr.size(); i++){
        int minDiff = arr[i] - arr[i-1];
        if(min > minDiff){
            min = minDiff;
        }
       }

       for(int i =1; i<arr.size(); i++){
        if(arr[i] - arr[i-1] == min){
            pair.push_back({arr[i-1], arr[i]});
        }
       }

        return pair;

    }
};