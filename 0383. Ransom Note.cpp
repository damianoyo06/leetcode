//https://leetcode.com/problems/ransom-note/description/
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       unordered_map<char, int> freq;
       unordered_map<char, int> freqM;

       for(char c: ransomNote){
        freq[c]++;
       }

       for(char c:magazine){
         freqM[c]++;
       }

       for(char c:ransomNote){
        if(freq[c] > freqM[c]){
            return false;
        }
       }

       return true;
    }
};