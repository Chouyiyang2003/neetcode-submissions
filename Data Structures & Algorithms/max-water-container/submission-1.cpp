class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max = 0;
        for(int i = 0 ; i < heights.size() ; i++){
            for(int j = i+1 ; j < heights.size() ; j++){
                int small = min(heights[i], heights[j]);
                int area = min(heights[i],heights[j])*(j-i);
                cout << area << endl;
                int max = max(area, max);
            }
        }
        return max;
    }
};
