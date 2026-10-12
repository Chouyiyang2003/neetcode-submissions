class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        unordered_set<char> aa;
        int l = 0; int r = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(aa.count(s[i])){
                ans = max(ans, i - l);
                aa.clear();
                l = i;
            }
            aa.insert(s[i]);
        }

        return ans;
        
    }
};
