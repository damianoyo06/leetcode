//https://leetcode.com/problems/check-if-the-number-is-fascinating/description/
class Solution {
public:
    bool isFascinating(int n) {
        string number = to_string(n);

        string number2 = to_string(n*2);
        string number3 = to_string(n*3);

        number.append(number2);
        number.append(number3);

        unordered_map<char, int> map;
        for(char c:number){
            if(c == '0') return false;
            map[c]++;
        }

        for(auto p:map){
            if(p.second > 1){
                return false;
            }
        }

        return true;

    }
};