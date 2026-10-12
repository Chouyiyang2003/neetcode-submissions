class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s == ""){
            return 0;
        }

        unordered_map<char, int> um;
        int ans = 0;
        int num = 0;
        int l = 0;
        int len = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(um.find(s[i])!=um.end()){
                num = um[s[i]];
                ans = max(i-num, ans);
                um[s[i]] = i;
                l = i;
                len = 0;
            }
            else{
                len++;
                um[s[i]] = i;
                return max(len, ans);
            }
        }
        int a = s.size()-l;
        return max(a, ans);
    }
};
