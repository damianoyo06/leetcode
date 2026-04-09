//https://leetcode.com/problems/top-k-frequent-elements/description/
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count; //int, count
        
        for(int num:nums){
            count[num]++;
        }
        
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minHeap;
        vector<int> res;
        
        for(auto& [num, count]:count){
            minHeap.push({count, num});
            
            if(minHeap.size() > k){
                minHeap.pop();
            }
        }
        
        while(!minHeap.empty()){
            res.push_back(minHeap.top().second);
            minHeap.pop();
        }
        
        return res;
    }
};