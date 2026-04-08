//https://leetcode.com/problems/reverse-degree-of-a-string/description/
class Solution {
public:
    int reverseDegree(string s) {
        int index = 0;
        int reverse = 0;
        int sum = 0;
        for(int i=0; i<s.size(); i++){
            char c = s[i];
            reverse = 27 - (c - 'a' +1);
            index = i + 1;
            sum += reverse * index;
        }

        return sum;
    }
};