//https://leetcode.com/problems/alternating-groups-i/description/
class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int count = 0;
        colors.push_back(colors[0]);
        colors.push_back(colors[1]);
        for(int i =0; i<colors.size()-2; i++){
           if(colors[i] != colors[i+1] && colors[i] == colors[i+2]){
            count++;
           }
        }

        return count;
    }
};