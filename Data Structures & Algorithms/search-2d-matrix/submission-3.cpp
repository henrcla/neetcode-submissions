class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    
        // Staircase search
        // Start top right of matrix
        int row = 0;
        int col = matrix[0].size() - 1;

        // While still in matrix
        while (row < matrix.size() && col >= 0){
            if (matrix[row][col] == target){
                return true;
            } else if (matrix[row][col] > target){
                col--;
            } else if (matrix[row][col] < target){
                row++;
            }
        }

        return false;
    }
};
