//https://leetcode.com/problems/best-poker-hand/description/
class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        unordered_set<char> us(suits.begin(), suits.end());
        if(us.size() == 1){
            return "Flush";
        }
        sort(ranks.begin(), ranks.end());
        for(int i=2; i<ranks.size(); i++){
            if(ranks[i] == ranks[i-1] && ranks[i-1] == ranks[i-2]){
                return "Three of a Kind";
            }
        }
        for(int i=1; i<ranks.size(); i++){
            if(ranks[i] == ranks[i-1]){
                return "Pair";
            }
        }

        return "High Card";
    }
};