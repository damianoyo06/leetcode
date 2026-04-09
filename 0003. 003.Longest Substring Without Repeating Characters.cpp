//https://leetcode.com/problems/longest-substring-without-repeating-characters/description/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        unordered_set<char> seen;
        int count = 0;

        for(int r=0; r<s.size(); r++){
            while(seen.find(s[r]) != seen.end()){
                seen.erase(s[l]);
                l++;
            }
            seen.insert(s[r]);
            count = max(count, r-l +1);
        }

        return count;
    }
};