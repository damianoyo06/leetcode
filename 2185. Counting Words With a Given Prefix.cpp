//https://leetcode.com/problems/counting-words-with-a-given-prefix/description/
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        
        int count = 0;
        int size = pref.size();
        
        for(string word:words){
            if(word.substr(0, size) == pref){
                count++;
            }
        }

        return count;
    }
};