class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> output_str;
        vector<string> keys;
        for(int i = 0 ; i < strs.size() ; i++){
            string key = strs[i];
            sort(key.begin(), key.end());
            bool found = false;
            for (int j = 0 ; j < keys.size() ; j++){
                if(keys[j] == key){
                    output_str[j].push_back(strs[i]);
                    found = true;
                    break;
                }
            }
            if(!found){
                keys.push_back(key);
                output_str.push_back({strs[i]});
            }
        }
        return output_str;
    }
};
