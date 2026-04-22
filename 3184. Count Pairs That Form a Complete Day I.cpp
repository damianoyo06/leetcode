//https://leetcode.com/problems/count-pairs-that-form-a-complete-day-i/description/
class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        int ans = 0;
        for(int i=0; i<hours.size(); i++){
            for(int j=i+1; j<hours.size(); j++){
                int days = hours[i] + hours[j];
                if(days % 24 == 0){
                    ans++;
                }
            }
        }

        return ans;
    }
};