class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<char>> rowValues; // Key is row index, values are the characters in that row
        unordered_map<int, unordered_set<char>> colValues; // Key is col index, values are the characters in that col

        map<pair<int, int>, unordered_set<char>> sectionValues; // Key is section key, values are the characters in that section

        for (int i = 0; i < 9; i++){
            for (int j = 0; j < 9; j++){

                if (board[i][j] == '.'){
                    continue;
                }

                pair<int, int> section = {i/3, j/3};

                if (rowValues[i].count(board[i][j]) || colValues[j].count(board[i][j]) || sectionValues[section].count(board[i][j])){
                    return false;
                } 
                rowValues[i].insert(board[i][j]);
                colValues[j].insert(board[i][j]);
                sectionValues[section].insert(board[i][j]);
            }
        }
    return true;
    }
};
