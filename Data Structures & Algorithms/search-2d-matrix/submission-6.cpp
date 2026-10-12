class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n1 = matrix.size();
        int n2 = matrix[0].size();
        int n = n1*n2;
        int l = 0;
        int r = n-1;
        int mid;
        while(l<=r){
            mid = (l+r)/2;
            int i1 = mid/n2;
            int i2 = mid%n2;
            if(matrix[i1][i2] == target){
                return true;
            }
            else if(matrix[i1][i2] < target){
                l = mid+1;
            }
            else{
                r = mid-1;
            }
            
        }
        return false;
    }
};
