class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int t = 0;
        int b = matrix.size()-1;
        int row; 

        while(t <= b) {

            row = t + (b-t) / 2;

            if(matrix[row][0] > target) 
                b = row - 1; 
            else if (matrix[row][matrix[row].size()-1] < target) 
                t = row + 1;
            else
                break;
            
        }

        int l = 0;
        int r = matrix[row].size()-1;
        int col; 

        while(l <= r) {
            col = l + (r-l) / 2;

            if(matrix[row][col] == target)
                return true;
            
            if(matrix[row][col] < target) 
                l = col+1;
            else 
                r = col-1;
        
        }
        
        return false; 

    }
};
