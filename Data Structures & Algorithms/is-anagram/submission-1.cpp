class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // if(s == t) return true;
        // return false;
        unordered_map<char, int> hash1, hash2;
        for(char c : s){
            hash1[c]++;
        }
        for(char c : t){
            hash2[c]++;
        }
        if(hash1 == hash2) return true;
        else return false;
    }
};
