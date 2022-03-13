class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        vector<int> result;
        int row_start = 0, row_end = r-1, col_start = 0, col_end = c-1;
        int dir = 0;
        
        while ((row_start <= row_end) && (col_start <= col_end)) {
            //Choose direction to traverse
            switch(dir) {
                //Right
                case 0:
                    for(int i = col_start; i <= col_end; i++) {
                        result.push_back(matrix[row_start][i]);
                    }
                    row_start++;
                    break;
                
                //Down
                case 1:
                    for(int i = row_start; i <= row_end; i++) {
                        result.push_back(matrix[i][col_end]);
                    }
                    col_end--;
                    break;
                
                //Left
                case 2:
                    for(int i = col_end; i >= col_start; i--) {
                        result.push_back(matrix[row_end][i]);
                    }
                    row_end--;
                    break;
                
                //Up
                case 3:
                    for(int i = row_end; i >= row_start; i--) {
                        result.push_back(matrix[i][col_start]);
                    }
                    col_start++;
                    break;
                
                default:
                    break;
            }
            
            //Check if direction has made a full loop;
            if (dir == 3) {
                dir = 0;
            } else {
                dir++;
            }
            
        }
        
        return result;
    }
};