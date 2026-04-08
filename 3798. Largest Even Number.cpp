//https://leetcode.com/problems/largest-even-number/description/
class Solution {
public:
    string largestEven(string s) {
        
        //check if the answer is even
        int n = s.size()-1;
    

      while(s[n] == '1' && n > 0){
        s.erase(n);
        n = n-1;
      }

      if(s == "1"){
        return "";
      }


        //deal with 1 or 11 or 11
     
      return s;
    }
};