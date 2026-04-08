//https://leetcode.com/problems/separate-the-digits-in-an-array/description/
class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;

        for(int i=0; i<nums.size(); i++){
           int digit = nums[i];
            vector<int> temp;

           if(digit < 10){
            ans.push_back(digit);
           } else {
             while(digit > 0){
                int num = digit % 10;
                digit /= 10;
                temp.push_back(num);
           }
           }

           reverse(temp.begin(), temp.end());
           ans.insert(ans.end(), temp.begin(), temp.end());
          
        }

        return ans;
    }
};
