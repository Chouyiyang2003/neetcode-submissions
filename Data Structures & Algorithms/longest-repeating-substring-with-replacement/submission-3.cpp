class Solution {
public:
    int characterReplacement(string s, int k) {
        int count[26] = {0};
        int l = 0;
        int ans = 0;
        for(int r = 0 ; r < s.size(); r++){
            count[s[r] - 'A']++;

            int mf = 0;

            for(int i = 0 ; i < 26 ; i++){
                mf = max(mf, count[i]);
            }

            while(r - l + 1 > k + mf){
                count[s[l] - 'A']--;
                l++;
            }

            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};
