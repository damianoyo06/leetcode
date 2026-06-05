//https://leetcode.com/problems/kth-missing-positive-number/
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int current = 1;
        int i = 0;
        int n = arr.size();

        while (k > 0) {
            if (i < n && arr[i] == current) {
                i++; 
            } else {
                k--; 
            }
            
            if (k == 0) {
                return current;
            }
            
            current++;
        }

        return -1;
    }
};