class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        /* Notes:
        - Use of map for section values
        - Use of int as key and an unordered_set to store multiple values under each key
        - If board is empty, use of continue key word again to skip iteration of loop
        - Pair key for section
        - count function for checking if value is present under a key
        */



        
        unordered_map<int, unordered_set<char>> rowValues; // Stores row, values in the row
        unordered_map<int, unordered_set<char>> colValues; // Stores col, values in the col
        map<pair<int,int>, unordered_set<char>> sectionValues; // Stores section key, values
        
        for (int i = 0; i < 9; i++){
            for (int j = 0; j < 9; j++){

                if (board[i][j] == '.'){
                    continue;
                }

                pair<int,int> section = {i/3, j/3};


                if (rowValues[i].count(board[i][j]) || colValues[j].count(board[i][j]) || sectionValues[section].count(board[i][j])){
                    return false;
                } else {
                    rowValues[i].insert(board[i][j]);
                    colValues[j].insert(board[i][j]);
                    sectionValues[section].insert(board[i][j]);
                }
            }
        }
    return true;
    }
};
