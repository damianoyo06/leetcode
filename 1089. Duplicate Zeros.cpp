//https://leetcode.com/problems/duplicate-zeros/description/
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        int zeros = 0;

        // 1️⃣ Count zeros
        for (int num : arr) {
            if (num == 0) zeros++;
        }

        // 2️⃣ Work backwards
        for (int i = n - 1; i >= 0; i--) {
            if (i + zeros < n)
                arr[i + zeros] = arr[i];  // ✅ shift value right by zeros

            if (arr[i] == 0) {
                zeros--;
                if (i + zeros < n)
                    arr[i + zeros] = 0;  // ✅ duplicate the zero
            }
        }
    }
};