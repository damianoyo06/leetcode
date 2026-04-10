//https://leetcode.com/problems/path-crossing/description/
class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int,int>> visited;
        
        int x = 0, y = 0;
        visited.insert({x, y});

        for(char c : path){
            if(c == 'N') y++;
            if(c == 'S') y--;
            if(c == 'E') x++;
            if(c == 'W') x--;

            if(visited.count({x, y})) {
                return true;
            }

            visited.insert({x, y});
        }

        return false;
    }
};