class Solution {
public:
    // bool isAnagrams(str1, str2){
    //     // if()
    // }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, int> um;
        vector<vector<string>> ans;
        for(int i = 0 ; i < strs.size() ; i++){
            string key = strs[i];
            sort(key.begin(), key.end());
            if(um.find(key) == um.end()){
                um[key] = ans.size();
                ans.push_back({strs[i]});
            }
            else{
                ans[um[key]].push_back(strs[i]);
            }
        }
        return ans;
    }
};
