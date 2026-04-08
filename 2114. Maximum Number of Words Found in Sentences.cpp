//https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/description/
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {

        int sentence = 0;
        
        for(int i=0; i<sentences.size(); i++){
            int current = 1;
            for(int j=0; j<sentences[i].size(); j++){
                if(sentences[i][j] == ' '){
                    current++;
                }
            }
            sentence = max(current, sentence);
        }
        return sentence;
    }
};