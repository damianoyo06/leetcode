//https://leetcode.com/problems/maximum-score-after-splitting-a-string/description/
class Solution {
public:
    int maxScore(string s) {
        int sum = INT_MIN;

        int zeroCount = 0;
        int oneCount = 0;

        for(int i=0; i<s.size()-1; i++){
            if(s[i] == '1'){
                oneCount++;
            } else {
                zeroCount++;
            }

            sum = max(sum, zeroCount-oneCount);
        }

        if(s[s.size()-1] == '1'){
            oneCount++;
        }

        return sum + oneCount;
        
    }
};