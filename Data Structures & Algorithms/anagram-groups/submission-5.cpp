class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> output_str;

        unordered_map<string, int> keys;

        for (int i = 0; i < strs.size(); i++) {
            string key = strs[i];
            sort(key.begin(), key.end());

            if (keys.find(key) != keys.end()) {
                output_str[keys[key]].push_back(strs[i]);
            }
            else {
                keys[key] = output_str.size();
                output_str.push_back({strs[i]});
            }
        }

        return output_str;
    }
};