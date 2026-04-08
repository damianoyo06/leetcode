//https://leetcode.com/problems/number-of-strings-that-appear-as-substrings-in-word/description/
class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        
        int ans = 0;

        for(int i=0; i<patterns.size(); i++){
            for(int j=0; j<word.size(); j++){
                if(patterns[i] == word.substr(j, patterns[i].size())){
                    ans++;
                    break;
                }
            }
            
        }

        return ans;
    }
};