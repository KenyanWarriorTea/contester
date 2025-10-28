#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;

    int matrix[rows][cols], rowMins[rows];

    for (int r = 0; r < rows; r++)
        for (int c = 0; c < cols; c++)
            cin >> matrix[r][c];

    for (int r = 0; r < rows; r++)
        rowMins[r] = *min_element(matrix[r], matrix[r] + cols);

    int result = rowMins[0];
    for (int r = 1; r < rows; r++)
        if (rowMins[r] > result)
            result = rowMins[r];

    cout << result;

    return 0;
}
