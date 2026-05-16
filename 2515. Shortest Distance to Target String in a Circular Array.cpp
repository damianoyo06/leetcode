//https://leetcode.com/problems/shortest-distance-to-target-string-in-a-circular-array/description/
class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int countPos = 0;
        int countNeg = 0;
        int i = startIndex;
        while(words[i] != target){
            i++;
            countPos++;
            if(i == words.size()){
                i = 0;
            }
            if(countPos == words.size()) return -1;
        }

        i = startIndex;
        while(words[i] != target){
            i--;
            countNeg++;
            if(i < 0){
                i = words.size()-1;
            }
            if(countNeg == words.size()) return -1;
        }

        countPos = min(countPos, countNeg);
        return countPos;
    }
};