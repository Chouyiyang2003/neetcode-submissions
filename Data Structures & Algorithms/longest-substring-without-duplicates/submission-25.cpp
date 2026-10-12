class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> um;
        int ans = 0;
        int l = 0;

        for (int i = 0; i < s.size(); i++) {

            if (um.find(s[i]) != um.end()) {
                l = max(l, um[s[i]] + 1);
            }

            um[s[i]] = i;

            ans = max(ans, i - l + 1);
        }

        return ans;
    }
};
