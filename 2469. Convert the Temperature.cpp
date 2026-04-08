//https://leetcode.com/problems/convert-the-temperature/description/
class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> res;
    
            double fahr = celsius * 1.8 + 32.0;
            double kelvin = celsius + 273.15;
            res.push_back(kelvin);
            res.push_back(fahr);
         
        return res;
    }
};