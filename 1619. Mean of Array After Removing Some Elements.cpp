//https://leetcode.com/problems/mean-of-array-after-removing-some-elements/description/
class Solution {
public:
    double trimMean(vector<int>& arr) {
        double mean = 0;

        sort(arr.begin(), arr.end());

        int n = arr.size();
        int fivePercent = (5*n)/100;

    
       
        for(int i=fivePercent; i<n-fivePercent; i++){
            mean += arr[i];
          
        }

            mean = mean / (n - (fivePercent*2));

        return mean;
    }
};