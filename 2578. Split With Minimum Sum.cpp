//https://leetcode.com/problems/split-with-minimum-sum/
class Solution {
public:
    int splitNum(int num) {
        string p1;
        string p2;
        string s = to_string(num);
        sort(s.begin(), s.end());
        int i = 0;
        int j = 1;
        while(i < s.size() || j < s.size()){
            p1.push_back(s[i]);
            p2.push_back(s[j]);
            i+= 2;
            j += 2;
        }

        return stoi(p1) + stoi(p2);


    }
};

