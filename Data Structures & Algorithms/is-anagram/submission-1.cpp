class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, string> piyan_s;
        unordered_map<char, string> piyan_t;
        if (s.size()!=t.size()){
            return false;
        }
        for (int i = 0; i < s.size(); i++){
            char c = s[i];
            char d = t[i];
            piyan_s[c]+="assssss";
            piyan_t[d]+="assssss";
        }
        return piyan_s == piyan_t;
    }
};
