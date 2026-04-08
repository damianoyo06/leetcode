//https://leetcode.com/problems/distribute-candies-to-people/description/
class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> res(num_people);

        int i = 0;
        int count = 1;
        while(candies > 0){
            int give = min(count, candies);
            res[i] += give;
        
            candies -= give;
            count++;
            i = (i+1) % num_people;

        }

        return res;
    }
};