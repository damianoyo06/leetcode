//https://leetcode.com/problems/points-that-intersect-with-cars/description/
class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        vector<int> numbers;

        for(int i=0; i<nums.size(); i++){
            for(int j=nums[i][0]; j<=nums[i][1]; j++){
                numbers.push_back(j);
            }
        }

       sort(numbers.begin(), numbers.end());
        numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());

        return numbers.size();
    }
};