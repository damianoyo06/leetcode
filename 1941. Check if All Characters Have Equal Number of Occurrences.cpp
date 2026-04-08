//https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/description/
class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> freq;

        for(char c:s){
            freq[c]++; //a =3, b = 3. c = 3
        }

        int target = freq.begin()->second;

        for(auto& p:freq){
            if(p.second != target){
                return false;
            }
        }

        return true;
    }
};