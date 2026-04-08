//https://leetcode.com/problems/compute-decimal-representation/description/
class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> res;
        double count = 1;
        while(n > 0){
            int digit = n % 10 * count;
            if(digit != 0)  res.insert(res.begin(), digit);
            n /= 10;
            count *= 10;

        }

        return res;
    }
};