//https://leetcode.com/problems/largest-3-same-digit-number-in-string/description/
class Solution {
public:
    string largestGoodInteger(string num) {
        string best = "";

        int count = 1;
        for(int i=1; i<num.size(); i++){
            if(num[i] == num[i-1]){
                count++;
            } else {
                count = 1;
            }

            if(count >= 3){
                string current(3, num[i]);
                
                if(current > best){
                    best = current;
                }
            }
        }

        return best;

    }
};