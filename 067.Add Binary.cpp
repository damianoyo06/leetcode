//https://leetcode.com/problems/add-binary/description/
class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;
        string ans = "";

        while(i >= 0 || j >= 0 || carry) {
            int intA = 0;
            int intB = 0;

            if(i >= 0) {
                intA = a[i] - '0';
                i--;
            }

            if(j >= 0) {
                intB = b[j] - '0';
                j--;
            }

            int sum = intA + intB + carry;
            carry = sum / 2;
            sum = sum % 2;

            ans.insert(0, 1, sum + '0');
        }

        return ans;
    }
};