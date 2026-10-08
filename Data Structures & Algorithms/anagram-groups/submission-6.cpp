class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, int> keys;
        vector<vector<string>> output_ans;
        for(int i = 0 ; i < strs.size() ; i++){
            string key = strs[i];
            sort(key.begin(),key.end());
            if(keys.find(key) == keys.end()){
                keys[key] = output_ans.size();
                output_ans.push_back({strs[i]});
                continue;
            }else{
                output_ans[keys[key]].push_back(strs[i]);
            }
        }
        return output_ans;
    }
};
