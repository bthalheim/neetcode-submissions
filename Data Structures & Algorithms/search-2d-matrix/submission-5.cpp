class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int l = 0;

        int ROWS = matrix.size();
        int COLS = matrix[0].size();

        int r = ROWS * COLS -1;

        int m;
        int row, col; 
        
        while(l <= r) {

            m = l + (r - l) / 2; 

            row = m / COLS;
            col = m % COLS;

            if(matrix[row][col] == target)
                return true;  

            if(matrix[row][col] > target)
                r = m - 1; 
            
            if(matrix[row][col] < target)
                l = m + 1; 

        }
        return false;

    }
};
