class Solution {
public:
    int maxArea(vector<int>& heights) {
        int r = heights.size()-1;
        int l = 0;
        int ans = 0;
        int area;
        while(l < r){
            ans = max(min(heights[l], heights[r]) * (r-l), ans);
            if(heights[l] < heights[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return ans;
    }
};
