//https://leetcode.com/problems/determine-if-string-halves-are-alike/
class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.size();
        string one = s.substr(0, n/2);
        string two = s.substr(n/2, n/2);

        int count1 = 0;
        int count2 = 0;
        for(char c:one){
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || 
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                count1++;
            }
        }

        for(char c:two){
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || 
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                count2++;
            }
        }

        return (count1 == count2);
    }
};