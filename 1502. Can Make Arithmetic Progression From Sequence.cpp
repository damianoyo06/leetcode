//https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/description/
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int answer = 0;
        for(int i=1; i<arr.size(); ++i){
            int difference = arr[1] - arr[0];
            
            answer = arr[i] - arr[i-1];
            if(answer != difference){
                return false;
            }
        }

        return true;
    }
};