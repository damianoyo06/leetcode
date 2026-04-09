//https://leetcode.com/problems/flipping-an-image/description/
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> ans;

        for(int i = 0; i < image.size(); i++){
            vector<int> row;  

            for(int j = image[i].size() - 1; j >= 0; j--){
                row.push_back(image[i][j] ^ 1); 
            }

            ans.push_back(row);
        }

        return ans;
    }
};