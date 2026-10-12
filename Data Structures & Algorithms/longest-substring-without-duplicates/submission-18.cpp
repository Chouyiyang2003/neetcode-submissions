class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s == ""){
            return 0;
        }
        int ans = 1;
        bool soso = false;
        unordered_set<char> aa;
        int l = 0; int carry = 0;
        for(int i = 0 ; i < s.size() ; i++){
            // if()
            if(aa.count(s[i])){
                ans = max(ans, i - l + carry);
                aa.clear();
                l = i ;
                soso = true;
                carry = i-l-1;
            }
            aa.insert(s[i]);
        }
        if(!soso){
            return s.size();
        }
        int aaa = s.size();
        return max(ans, aaa-l);
        
    }
};
