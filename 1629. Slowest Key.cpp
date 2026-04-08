//https://leetcode.com/problems/slowest-key/description/
class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int time = releaseTimes[0];
        char letter = keysPressed[0];

        for(int i=1; i<releaseTimes.size(); i++){
            int currentTime = releaseTimes[i] - releaseTimes[i-1];
            char currentKey = keysPressed[i];

            if(currentTime > time ||
                (currentTime == time && currentKey > letter)){
                   
                time = currentTime;
                letter = currentKey;
                
            }
        }

        return letter;
    }
};