//https://leetcode.com/problems/remove-trailing-zeros-from-a-string/description/?envType=problem-list-v2&envId=vtvcs60s
class Solution {
public:
    string removeTrailingZeros(string num) {
        string ans = "";
        int n = num.size()-1;

        int i = n;
        while(i>=0 && num[i] == '0') i--;

        for(int j=0; j<=i; j++){
            ans.push_back(num[j]);
        }

        return ans;
    }
};
