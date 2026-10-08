class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> output_str;
        unordered_map<string, int> group_index;
        for(int i = 0 ; i < strs.size() ; i++){
            string key = strs[i];
            sort(key.begin(), key.end());
            if(group_index.find(key) == group_index.end()){
                group_index[key] = output_str.size();
                output_str.push_back({strs[i]});
            }else{
                int index = group_index[key];
                output_str[index].push_back(strs[i]);
            }
        }
        return output_str;
    }
};
