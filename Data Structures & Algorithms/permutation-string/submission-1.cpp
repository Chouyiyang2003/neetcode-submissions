class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        // sort(s1.begin(), s1.end());
        int n1 = s1.size();
        int n2 = s2.size();
        if(n1 > n2) return false;

        unordered_map<char, int> um1;
        unordered_map<char, int> um2;

        for(int i = 0 ; i < n1 ; i++){
            um1[s1[i]]++;
        }
        for(int i = 0 ; i < n2 ; i++){
            if(i >= n1){
                um2[s2[i-n1]]--;
                if(um2[s2[i-n1]] == 0){
                    um2.erase(s2[i-n1]);
                }  
            }
            
            um2[s2[i]]++;
            if(i >= n1 - 1 && um1 == um2){
                return true;
            }
        }
        return false;
    }
};
