//https://leetcode.com/problems/left-and-right-sum-differences/description/
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int left = 0;
        int right = 0;
        int n = nums.size();
        vector<int> leftSum;
        vector<int> rightSum;
        rightSum.push_back(right); //[0]
        leftSum.push_back(left); // [0]


        for(int i=0; i<n-1; i++){
            left += nums[i];
            leftSum.push_back(left);
        }

        for(int i=n-1; i>0; i--){
            right += nums[i];
            rightSum.push_back(right);
        }

        sort(rightSum.rbegin(), rightSum.rend());

        int sum = 0;
        vector<int> res;
        for(int i=0; i<rightSum.size(); i++){
           sum = leftSum[i] - rightSum[i];
            res.push_back(abs(sum));
        }

        return res;
    }
};