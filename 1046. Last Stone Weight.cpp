//https://leetcode.com/problems/last-stone-weight/description/
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        if(stones.size() <= 1) return stones[0];

        sort(stones.rbegin(), stones.rend());


        while(stones.size() > 1){
            int x = stones[0];
            int y = stones[1];

            if(x == y){
                stones.erase(stones.begin(), stones.begin() + 2);
            } else {
                stones.push_back(x-y);
                stones.erase(stones.begin(), stones.begin() + 2);
            }
             sort(stones.rbegin(), stones.rend());
        }

        if(stones.size() == 0) return 0;
        return stones[0];
    }
};