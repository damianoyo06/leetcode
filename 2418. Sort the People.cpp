//https://leetcode.com/problems/sort-the-people/description/
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map<int, string> people;
        int n = names.size();

        for(int i=0; i<n; i++){
            people[heights[i]] = names[i];
        }

        sort(heights.rbegin(), heights.rend());

        for(int i=0; i<n; i++){
            names[i] = people[heights[i]];
        }

        return names;
    }
};