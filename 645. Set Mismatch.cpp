//https://leetcode.com/problems/set-mismatch/description/
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        int n = nums.size();
        unordered_map<int, int> map;

        for(int i=1; i<=n; i++){
            map[i]++;
        }

        for(auto a : nums){
            map[a]--;
        }

        int duplicate = 0;
        int miss = 0;

        for(auto a:map){
            if(a.second == -1) duplicate = a.first;
            if(a.second == 1) miss = a.first;
        }

        return {duplicate, miss};
        

    }
};