//https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/description/
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
     
        sort(nums.begin(), nums.end());
        vector<int> res;
        
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1] != nums[i] && nums[i] - nums[i-1] > 1){
                for(int missing = nums[i-1] + 1; missing< nums[i]; missing++){
                    res.push_back(missing);
                }
            }
        }
          for (int missing = nums.back() + 1; missing <= nums.size(); missing++) {
        res.push_back(missing);
    }

    // Check before the first element (for cases like [2,3])
    for (int missing = 1; missing < nums.front(); missing++) {
        res.push_back(missing);
    }

        return res;
    }
};