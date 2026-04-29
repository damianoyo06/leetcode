//https://leetcode.com/problems/sum-of-digits-of-string-after-convert/description/
class Solution {
public:
    int getLucky(string s, int k) {
        string numbers = "";

        for(char c:s){
            numbers += to_string(c - 'a' + 1);
        }


        while(k > 0){
            int temp = 0;
            for(char num:numbers){
                temp += num - '0';
            }
            numbers = to_string(temp);
            k--;
        }

        return stoi(numbers);
    }
};