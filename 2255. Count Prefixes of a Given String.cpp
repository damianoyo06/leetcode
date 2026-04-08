//https://leetcode.com/problems/count-prefixes-of-a-given-string/description/
class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count = 0;

        for(int i = 0; i < words.size(); i++){
            if(s.compare(0, words[i].size(), words[i]) == 0){
                count++;
            }
        }
        
        return count;
    }
};