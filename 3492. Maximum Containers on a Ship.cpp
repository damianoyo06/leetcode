//https://leetcode.com/problems/maximum-containers-on-a-ship/description/
class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
      
      int d=maxWeight/w;

      return min(d, n*n);
    }
};