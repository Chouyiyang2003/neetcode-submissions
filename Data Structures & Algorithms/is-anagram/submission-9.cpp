class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> umap_s;
        unordered_map<char, int> umap_t;
        if(s.size()!=t.size()){
            return false;
        }
        for (int i=0; i<s.size(); i++){
            // char s_c=s[i];
            // char t_c=t[i];
            // umap_s[s_c]++;
            // umap_t[t_c]++;
            umap_s[(char) s[i]]++;
            umap_t[(char) t[i]]++;
        }
        return umap_s == umap_t;
    }
};
