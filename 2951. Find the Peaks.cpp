//https://leetcode.com/problems/find-the-peaks/description/
class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        //return indece

        int n = mountain.size()-1;
        vector<int> peaks;

        if(n > 1){
          for(int i=1; i<n; i++){
            if(mountain[i] > mountain[i-1] && mountain[i] > mountain[i+1]){
                peaks.push_back(i);
            }
          }
        }
       
        return peaks;
        
    }
};