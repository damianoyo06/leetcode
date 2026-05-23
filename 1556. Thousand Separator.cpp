//https://leetcode.com/problems/thousand-separator/description/
class Solution {
public:
    string thousandSeparator(int n) {
        string s = to_string(n);
        int sSize = s.size();
        int count = 0;
        for(int i=sSize-1; i>=0; i--){
            count++;
            if(count % 3 == 0 && i != 0){
                s.insert(s.begin() + i, '.');
            }
        }

        return s;
    }
};