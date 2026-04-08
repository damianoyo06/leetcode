//https://leetcode.com/problems/valid-word/description/
class Solution {
public:
    bool isValid(string word) {
        

        int vowel = 0;
        int constant = 0;
        //check if it has at least 3 characters:
        for(int i=0; i<word.size(); i++){
            
            if(isalpha(word[i])){
    
                if(tolower(word[i]) == 'a' || 
                tolower(word[i])  == 'e' ||
                tolower(word[i])  == 'i' ||
                tolower(word[i])  == 'o' ||
                tolower(word[i])  == 'u'){
                    vowel++;
                } else {
                    constant++;
                }
            }

            if(!isalnum(word[i])){
                return false;
            } 
        }

        if(word.size() > 2 && vowel > 0 && constant >> 0){
            return true;
        } else {
            return false;
        }
    }
};