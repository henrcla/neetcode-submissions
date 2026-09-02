class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       // Brute Force
       int m = matrix.size();
       int n = matrix[0].size(); //Check # of cols in 1st row

            for (int i = 0; i < m; i++){
                for (int j = 0; j < n; j++){
                    if (matrix[i][j] == target){
                        return true;
                }
            }
       }
    return false;
    }
};
