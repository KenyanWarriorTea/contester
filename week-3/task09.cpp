#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;

    if (rows >= 1 && cols <= 100) {
        int mat[rows][cols];
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                cin >> mat[i][j];

        int colSums[cols] = {0};
        for (int j = 0; j < cols; j++)
            for (int i = 0; i < rows; i++)
                colSums[j] += mat[i][j];

        int maxSum = *max_element(colSums, colSums + cols);

        int result = 0;
        for (int j = 0; j < cols; j++) {
            if (colSums[j] == maxSum) {
                result = j + 1;
                break;
            }
        }

        cout << result;
    }

    return 0;
}
