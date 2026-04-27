//https://leetcode.com/problems/number-of-rectangles-that-can-form-the-largest-square/description/
class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int count = 0;

        int largestSide = 0;

        for(int i=0; i<rectangles.size(); i++){
            int large = 0;

            if(rectangles[i][0] < rectangles[i][1]){
                large = rectangles[i][0];
            } else {
                large = rectangles[i][1];
            }

            largestSide = max(large, largestSide);
        }

        for(int i=0; i<rectangles.size(); i++){
            if((rectangles[i][0] < rectangles[i][1]) && rectangles[i][0] ==largestSide){
                count++;
            }

             if((rectangles[i][0] > rectangles[i][1]) && rectangles[i][1] ==largestSide){
                count++;
            }

        }

        return count;
    }

    
};