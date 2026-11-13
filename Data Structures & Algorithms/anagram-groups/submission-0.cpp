class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> hash;
        for(int i = 0; i < strs.size(); i++){
            vector<int> freq(26);
            for(char c : strs[i]){
                freq[c-'a']++;
            }
            string key = to_string(freq[0]);
            for(int i = 1; i < 26; i++){
                key += ',' + to_string(freq[i]);
            }
            hash[key].push_back(strs[i]);
        }
        for(const auto& pair : hash){
            ans.push_back(pair.second);
        }
        return ans;
    }
};
