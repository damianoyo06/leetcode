//https://leetcode.com/problems/goal-parser-interpretation/
class Solution {
public:
    string interpret(string command) {
        string ans;
        for(int i=0; i<command.size(); i++){
            if(isalpha(command[i])){
                ans.push_back(command[i]);
            } else if (command[i] == '('){
                if(i < command.size()-1 && command[i+1] == ')'){
                    ans.push_back('o');
                }
            }
        }

        return ans;
    }
};