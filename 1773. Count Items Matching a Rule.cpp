//https://leetcode.com/problems/count-items-matching-a-rule/
class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count = 0;

        int n = 0;

        if(ruleKey == "color"){
            n = 1;
        } else if (ruleKey == "name"){
            n = 2;
        } else {
            n = 0;
        }

        for(int i=0; i<items.size(); i++){
            if(ruleValue == items[i][n]){
                count++;
            }
        }

        return count;
    }
};