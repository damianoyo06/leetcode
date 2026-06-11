//https://leetcode.com/problems/check-if-any-element-has-prime-frequency
class Solution {
public:
    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int, int> freq;

        for(int num:nums){
            freq[num]++;
        }

        for(auto p:freq){
            int count = 0;
            int x = p.second;
            if(x == 1) continue;
            for(int i=1; i<=x; i++){
                if(x%i == 0){
                    count++;
                    
                }
            }

            if(count == 2) return true;
        }

        return false;
    }
};