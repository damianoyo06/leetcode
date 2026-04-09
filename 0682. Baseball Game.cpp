//https://leetcode.com/problems/baseball-game/description/
class Solution {
public:
    int calPoints(vector<string>& operations) {
        
        vector<int>score;
        for(int i=0; i<operations.size(); i++){
            int n = score.size();
            if(operations[i] == "+"){
                int prev = score[n-1] + score[n-2];
                score.push_back(prev);
            } else if (operations[i] == "D"){
                int d = score[n-1] * 2;
                score.push_back(d);
            } else if (operations[i] == "C"){
                score.pop_back();
            } else {
                int num = stoi(operations[i]);
                score.push_back(num);
            }
        }

        int ans = 0;
        for(int num:score){
            ans += num;
        }

        return ans;
    }
};