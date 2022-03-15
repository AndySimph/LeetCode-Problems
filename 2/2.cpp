//Andy Simphaly

#include <iostream>
#include <vector>

#define ROW 5
#define COL 4

void printdiag(int matrix[][COL]) {

    int row_flag = 0;
    int col_flag = 0;
    int sub_ctr = 1;
    int temp = 0;

    for (int i = 0; i < ROW+COL-1; i++) {
        
        if (sub_ctr < ROW) {
            for(int j = 0; j <= row_flag; j++) {
                std::cout << matrix[row_flag-j][col_flag] << " ";

                if (col_flag < COL) {
                    col_flag++;
                }
            }
        } else {
            for(int j = 0; j < ROW-temp-1; j++) {
                std::cout << matrix[ROW - j - 1][col_flag + temp+j] << " ";

            }
            temp++;
        }
        sub_ctr++;
        col_flag = 0;
        
        if (row_flag < ROW) {
            row_flag++;
        }

        std::cout << std::endl;
    }

    return;
}

//Driver Function
int main() {
    int matrix[ROW][COL] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16},
                        {17, 18, 19, 20}};

    printdiag(matrix);

    return 0;
}