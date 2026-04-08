class Solution {
public:
    int smallestEvenMultiple(int n) {
        int smallest = n;

        while (smallest % 2 != 0 ||
               smallest % n != 0) { // 5 % 2 = 1 || 5% 5 = 0
            smallest++;
        }

        return smallest;
    }
};