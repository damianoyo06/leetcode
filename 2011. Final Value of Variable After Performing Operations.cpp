//https://leetcode.com/problems/final-value-of-variable-after-performing-operations/description/
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int res = 0;

        for(int i=0; i<operations.size(); ++i){
            if(operations[i].find("++") != std::string::npos){
                res++;
            }

            if(operations[i].find("--") != std::string::npos){
                res--;
            }
        }

        return res;
    }
};