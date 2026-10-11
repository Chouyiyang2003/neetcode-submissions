class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> row(9);
        vector<unordered_set<char>> col(9);
        vector<vector<unordered_set<char>>> box(3,vector<unordered_set<char>>(3));
        for(int i = 0 ; i < 9 ; i++){
            for(int j = 0 ; j < 9 ; j++){
                char key = board[i][j];
                if(key == '.'){
                    continue;
                }

                int a = i / 3 ,b = j / 3;

                if(row[i].count(key)||col[j].count(key)||box[a][b].count(key)){
                    return false;
                }
                
                row[i].insert(key);
                col[j].insert(key);
                box[a][b].insert(key);
            }
        }
        return true;
    }
};
