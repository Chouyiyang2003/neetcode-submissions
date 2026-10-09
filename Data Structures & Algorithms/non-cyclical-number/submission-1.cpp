class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;
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

            if(seen.find(sum)!=seen.end()){
                return false;
            }
            ans = sum;
            seen.insert(sum);
        }
        

    }
};
