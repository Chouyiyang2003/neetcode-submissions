class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        digits[digits.size()-1] += 1;
        for(int i = digits.size()-1 ; i >= 0  ; i--){
            if(digits[i] >= 10 && i-1>=0){
                digits[i] = (digits[i])%10;
                digits[i-1]+=1;
            }
            if(digits[i] >= 10 && i-1<0){
                digits[i] = (digits[i])%10;
                digits.insert(digits.begin(), 1);
                break;
            }
            
        }
        return digits;
    }
};
