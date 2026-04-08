//https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/description/
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans;
       
        for(int i=0; i<prices.size(); i++){
            int discount = prices[i];
            for(int j=i+1; j<prices.size(); j++){
                if(discount >= prices[j]){
                    discount -= prices[j];
                    break;
                }
            }
             ans.push_back(discount);
        }
        return ans;
    }
};