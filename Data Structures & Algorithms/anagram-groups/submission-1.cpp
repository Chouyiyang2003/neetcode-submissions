class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> output_str;
        vector<unordered_map<char, int>> umap_str(strs.size());
        for(int i = 0 ; i < strs.size() ; i++){
            for(int  j = 0 ; j < strs[i].size() ; j++){
            umap_str[i][(char)strs[i][j]]++;
            }
        }
        while(!strs.empty()){
            vector<string> group;
            group.push_back(strs[0]);
            for (int i = 1 ; i < strs.size(); i++){
                if (umap_str[i] == umap_str[0]){
                    group.push_back(strs[i]);
                    strs.erase(strs.begin()+i);
                    umap_str.erase(umap_str.begin()+i);
                    i--;
                }
            }
            strs.erase(strs.begin());
            umap_str.erase(umap_str.begin());
            output_str.push_back(group);
        }
        return output_str;

    }
};
