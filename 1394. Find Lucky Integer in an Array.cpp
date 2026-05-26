//https://leetcode.com/problems/find-lucky-integer-in-an-array/
class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> freq;
        for(int num:arr){
            freq[num]++;
        }

        int ans = -1;

        for(auto& p:freq){
            int current = -1;
            if(p.second == p.first){
                current = p.second;
            }

            ans = max(ans, current);
        }


        return ans;
    }
};