//https://leetcode.com/problems/find-the-winning-player-in-coin-game/
class Solution {
public:
    string winningPlayer(int x, int y) {
        int moves = min(x, y/4);

        if(moves % 2 == 1){
            return "Alice";
        }

        return "Bob";
    }
};