//https://leetcode.com/problems/merge-strings-alternately/description/
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged;
        if(word1.length() > word2.length())
        {
            for(int i=0; i<word2.size(); i++){
                merged += word1[i];
                merged += word2[i];
            } for(int j=word2.size(); j<word1.size(); j++){
                merged += word1[j];
            }
        } else{
            for (int k=0; k<word1.size(); k++){
                merged += word1[k];
                merged += word2[k];
            } for(int z= word1.size(); z<word2.size();z++){
                merged += word2[z];
            }
        }
        return merged;
    }
};