//https://leetcode.com/problems/generate-a-string-with-characters-that-have-odd-counts/description/
class Solution {
public:
    string generateTheString(int n) {
        string ans = "";
        char a = 'a';
        char b = 'b';
         for(int i=1; i<n; i++){
                ans.push_back(a);
            }
        if(n % 2 == 0){
           ans.push_back(b);
        } else {
            ans.push_back(a);
        }
        return ans;
    }

    
};