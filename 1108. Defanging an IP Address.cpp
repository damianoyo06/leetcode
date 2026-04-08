//https://leetcode.com/problems/defanging-an-ip-address/description/
class Solution {
public:
    string defangIPaddr(string address) {
        string ans;
        for(char s:address){
            if(s == '.'){
                ans += "[.]";
            } else {
                 ans += s;
            }
           
        }
        return ans;
    }
};