//https://leetcode.com/problems/daily-temperatures/description/
class Solution {
public:
// Input: temperatures = [73,74,75,71,69,72,76,73]
// Output: [1,1,4,2,1,1,0,0]
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        stack<pair<int, int>> stack; ///temp, index
        vector<int> res(n, 0);

        for(int i=0; i<n; i++){
           int t = temperatures[i];
           while(!stack.empty() && t > stack.top().first){ // 74 > 73
            auto pair = stack.top(); //pair = 74, 1
            stack.pop(); //are we deleting 74 or 73?
            res[pair.second] = i - pair.second; 
           }
           stack.push({t, i});
            
        }
        return res;
    }
};