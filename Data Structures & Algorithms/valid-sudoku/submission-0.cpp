class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char, int> us;
        for(int i = 0 ; i < 3 ; i++){
            for(int j = 0 ; j < 3 ; j++){
                unordered_map<char, int> us;
                for(int k = 0 ; k < 3 ; k++){
                    for(int l = 0 ; l < 3 ; l++){
                        char key = board[3*i+k][3*j+l];
                        if (key == '.'){
                            continue;
                        }
                        if(us.find(key) != us.end()){
                            return false;
                        }
                        us[key]++;
                    }
                }
                
            }
        }
        for(int i = 0 ; i < 9 ; i++){
            unordered_map<char, int> us;
            for(int j = 0 ; j < 9 ; j++){
                char key = board[i][j];
                if (key == '.'){
                            continue;
                }
                if(us.find(key) != us.end()){
                    return false;
                }
                us[key]++;
            }
        }
        for(int i = 0 ; i < 9 ; i++){
            unordered_map<char, int> us;
            for(int j = 0 ; j < 9 ; j++){
                char key = board[j][i];
                if (key == '.'){
                            continue;
                }
                if(us.find(key) != us.end()){
                    return false;
                }
                us[key]++;
            }
        }
        return true;
    }
};
