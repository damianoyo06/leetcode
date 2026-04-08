//https://leetcode.com/problems/n-th-tribonacci-number/description/
class Solution:
    def tribonacci(self, n: int) -> int:
        if n == 0:
             return 0
        if n == 1 or n == 2:
             return 1
        t0, t1, t2 = 0, 1, 1
        nextTerm = 0

        for i in range(3, n+1):
            nextTerm = t1 + t0 + t2
            t0 = t1
            t1 = t2
            t2 = nextTerm
        
        return t2