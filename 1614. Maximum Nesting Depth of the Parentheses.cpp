//https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/description/
class Solution {
public:
    int maxDepth(string s) {
        int ans = 0;

        int current = 0;
        for(char& c:s){
            if(c == '('){
                current++;
            }
            if(c == ')'){
                ans = max(ans, current);
                current--;
            }
        }

        return ans;
    }
};