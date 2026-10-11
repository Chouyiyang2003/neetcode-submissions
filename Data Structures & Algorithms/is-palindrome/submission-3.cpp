class Solution {
public:
    bool isPalindrome(string s) {
        int right = s.size() - 1;
        int left = 0;
        while(left<right){
            while(left<right && !s[left].islanum()){left++;}
            while(left<right && !s[right].islanum()){right--;}
            if(tolower(s[left])!=tolower(s[right])){
                return false;
            }
            right--;
            left++;
        }
        return true;
    }
};
