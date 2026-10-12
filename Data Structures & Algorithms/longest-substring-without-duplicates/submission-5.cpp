class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s == ""){
            return 0;
        }
        int ans = 1;
        unordered_set<char> aa;
        int l = 0; int r = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(aa.count(s[i])){
                
                aa.clear();
                l = i;
            }
            ans = max(ans, i - l);
            aa.insert(s[i]);
        }

        return ans;
        
    }
};
