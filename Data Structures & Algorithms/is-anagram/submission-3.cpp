class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> piyan_s;
        unordered_map<char, int> piyan_t;
        if (s.size()!=t.size()){
            return false;
        }
        for (int i = 0; i < s.size(); i++){
            char s_char = s[i];
            char t_char = t[i];
            piyan_s[s_char]++;
            piyan_t[t_char]++;
        }
        return piyan_s == piyan_t;
    }
};
