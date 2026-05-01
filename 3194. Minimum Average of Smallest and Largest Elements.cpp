//https://leetcode.com/problems/minimum-average-of-smallest-and-largest-elements/description/
class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int i = nums.size() / 2;

        sort(nums.begin(), nums.end());
        vector<double> avg;

        while(i > 0){
            int n = nums.size()-1;
            double sum = nums[0] + nums[n];
            sum /= 2;
            avg.push_back(sum);
            nums.erase(nums.begin());
            nums.erase(nums.end() - 1);
            i--;
        }

        sort(avg.begin(), avg.end());

        return avg[0];
    }
};