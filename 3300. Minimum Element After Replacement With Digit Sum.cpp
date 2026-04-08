//https://leetcode.com/problems/minimum-element-after-replacement-with-digit-sum/description/
class Solution {
public:
    int minElement(vector<int>& nums) {
        int answer = INT_MAX;
        for(int num:nums){
            int digit = 0;
            while(num > 0){
                digit += num%10;
                num = num/10;
            }
            answer = min(digit, answer);
        }

        return answer;
    }
};