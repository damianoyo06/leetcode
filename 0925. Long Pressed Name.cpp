//https://leetcode.com/problems/long-pressed-name/description/
class Solution {
public:
    bool isLongPressedName(string name, string typed) {
       int i = 0, j = 0;
        
        while (j < typed.size()) {
            if (i < name.size() && name[i] == typed[j]) {
                // Characters match — move both
                i++;
                j++;
            } else if (j > 0 && typed[j] == typed[j - 1]) {
                // Long pressed character — move typed pointer
                j++;
            } else {
                // Mismatch
                return false;
            }
        }
        
        // All name chars should be covered
        return i == name.size();
    }
    
    

};