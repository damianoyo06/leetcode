//https://leetcode.com/problems/count-tested-devices-after-test-operations/description/
class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        
        int tested = 0;
        for(int i=0; i<batteryPercentages.size(); i++){
            if(batteryPercentages[i] > 0){
                tested++;
                for(int j=i+1; j<batteryPercentages.size(); j++){
                    if(batteryPercentages[j] > 0){
                        batteryPercentages[j]--;
                    }
                }
            }
        }
        return tested;
    }
};