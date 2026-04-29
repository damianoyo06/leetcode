//https://leetcode.com/problems/last-visited-integers/description/
class Solution {
public:
    vector<int> lastVisitedIntegers(vector<int>& nums) {
        vector<int> seen;
        vector<int> ans;
        int k = 0;
        bool consecutive = false;

        for(int& num:nums){
            if(num > 0){
                seen.insert(seen.begin(), num);
                consecutive = false;
                k = 0;
            }else {
                consecutive = true;
                

                if(k >= seen.size()){
                    ans.push_back(-1);
                } else {
                    ans.push_back(seen[k]);
                }
                k++;
            }
        }
        return ans;
    }
};