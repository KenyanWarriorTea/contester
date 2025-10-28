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

        int rowIndex = 0, colIndex = 0;
        bool found = false;

        for (int r = 0; r < rows && !found; r++) {
            for (int c = 0; c < cols; c++) {
                if (matrix[r][c] == 0) {
                    rowIndex = r + 1;
                    colIndex = c + 1;
                    found = true;
                    break;
                }
            }
        }

        cout << rowIndex << " " << colIndex;
    }

    return 0;
}
