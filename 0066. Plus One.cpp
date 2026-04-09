//https://leetcode.com/problems/plus-one/description/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
      int carry = 1;
      int i = digits.size() -1;

      while(i >=0 && carry !=0){
        int sum = carry + digits[i];
        carry = sum/10;
        sum = sum%10;
        digits[i] = sum;
        i--;
      }

      if(carry != 0){
        digits.insert(digits.begin(), carry);
      }

      return digits;
    }
};