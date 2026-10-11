class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char> s_char = s;
        vector<char> t_char = t;
        unordered_map<char, int> piyan_s;
        unordered_map<char, int> piyan_t;
        if (s.size()!=t.size()){
            return false;
        }
        for (int i = 0; i < s.size(); i++){
            piyan_s[s_char[i]]++;
            piyan_t[t_char[i]]++;
        }
        return piyan_s == piyan_t;
    }
};
