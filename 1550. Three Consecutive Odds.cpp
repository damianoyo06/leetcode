//https://leetcode.com/problems/three-consecutive-odds/
class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int cons = 0;

        for(int i=0; i<arr.size(); i++){
            if(arr[i] % 2 == 1){
                cons += 1;
            } else {
                cons = 0;
            }

            if(cons == 3){
                return true;
            }
        }
        return false;
    }
};