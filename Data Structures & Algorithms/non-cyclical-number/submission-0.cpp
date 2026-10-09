class Solution {
public:
    bool isHappy(int n) {
        unordered_map<string, int> um;
        int ans = n;
        while(true){
            int i = 0;
            int sum = 0;
            while(ans > 0){
                int digit = ans%10;
                sum += digit*digit;
                ans = ans/10;
            }
            if(sum == 1){
                return true;
            }

            if(um.find(to_string(sum))!=um.end()){
                return false;
            }
            ans = sum;
            um[to_string(sum)]++;
        }
        

    }
};
