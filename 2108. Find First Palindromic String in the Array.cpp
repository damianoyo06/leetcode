//https://leetcode.com/problems/find-first-palindromic-string-in-the-array/description/
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
      for(string word:words){
        string original  = word;
        reverse(word.begin(), word.end());
        if(word == original){
            return word;
        }
      }

      return "";
    }
};