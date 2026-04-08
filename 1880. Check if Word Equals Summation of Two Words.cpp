//https://leetcode.com/problems/check-if-word-equals-summation-of-two-words/description/
class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int index = 0;
        string digitOne, digitTwo, digitThree;
        for(char c:firstWord){
            digitOne += to_string(c - 'a');
        }

        for(char c: secondWord){
            digitTwo += to_string(c-'a');
        }

        for(char c:targetWord){
            digitThree += to_string(c-'a');
        }

        int one = stoi(digitOne);
        int two = stoi(digitTwo);
        int sum = stoi(digitThree);

        return one + two == sum;
    }
};