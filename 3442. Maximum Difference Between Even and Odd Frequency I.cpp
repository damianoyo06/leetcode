//https://leetcode.com/problems/maximum-difference-between-even-and-odd-frequency-i/description/
class Solution {
public:
    int maxDifference(string s) {
        vector<int> map(26);
        int maxi = 0, mini = s.size();

        for(char c:s){
            map[c - 'a']++;
        }

        for(int i=0; i<26; i++){
            if(map[i] % 2 != 0) maxi = max(maxi, map[i]);
            if(map[i] % 2 == 0 && map[i] > 0) mini = min(mini, map[i]);
        }

        return maxi - mini;


    }
};