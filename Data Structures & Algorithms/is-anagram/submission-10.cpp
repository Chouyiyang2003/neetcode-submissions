class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> um1, um2;
        if(s.size() != t.size()){
            return false;
        }
        for(int i = 0 ; i < s.size() ; i++){
            um1[(char) s[i]]++;
            um2[(char) t[i]]++;
        }
        return um1==um2;
    }
};
