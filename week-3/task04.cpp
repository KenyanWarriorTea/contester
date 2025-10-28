#include <iostream>

using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;

    if (rows >= 1 && cols <= 100) {
        int matrix[rows][cols];
        for (int r = 0; r < rows; r++)
            for (int c = 0; c < cols; c++)
                cin >> matrix[r][c];

        int lastRow = -1, lastCol = -1;
        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if (matrix[r][c] == -1) {
                    lastRow = r + 1;
                    lastCol = c + 1;
                }
            }
        }

        if (lastRow != -1 && lastCol != -1)
            cout << lastRow << " " << lastCol;
        else
            cout << "-1 -1";
    }

    return 0;
}
