//https://leetcode.com/problems/redistribute-characters-to-make-all-strings-equal/
class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char, int> freq;

        for(string& word:words){
            for(char& c:word){
                freq[c]++;
            }
        }

        int n = words.size();
    
        for(auto& p:freq){
            if(p.second % n != 0) return false;
        }

        return true;
    }
};