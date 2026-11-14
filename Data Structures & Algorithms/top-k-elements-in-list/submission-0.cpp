class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hash;
        for(int i : nums){
            hash[i]++;
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
        for(auto const& pair : hash){
             minHeap.push({pair.second, pair.first});
        
        // Remove the smallest element if size exceeds MAX_SIZE
        if (minHeap.size() > k) {
            minHeap.pop();
        }
        }
        vector<int> ans;
        while(!minHeap.empty()){
            ans.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return ans;
    }
};
