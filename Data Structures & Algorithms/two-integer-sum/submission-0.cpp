class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        for(int i = 0; i < nums.size(); i++){
            int num = nums[i];
            if(hash.find(target - num) != hash.end()){
                return {min(i, hash[target-num]), max(i, hash[target-num])};
            }
            hash[num] = i;
        }
        return {};
    }
};
