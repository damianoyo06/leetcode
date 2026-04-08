class Solution {
public:
    bool isPalindrome(int x) {

        string original = to_string(x);
        string palindrome = original;
        reverse(palindrome.begin(), palindrome.end());

        return original == palindrome;
    }
};