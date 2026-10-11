class Solution {
public:
    bool isAnagrams(str1, str2){
        // if()
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, int> um;
        vector<vector<string>> ans;
        for(int i = 0 ; i < strs.size() ; i++){
            string b = sort(str[i].begin(), str[i].end());
            if(um.find(b) == um.end()){
                ans[um[b]].push_back(strs[i]);
            }
            else{
                um[b] = i;
                ans[um[b]].push_back(strs[i]);
            }
        }
        return ans;
    }
};
