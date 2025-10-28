#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;

    if (rows >= 1 && cols <= 100) {
        int mat[rows][cols];
        int positives[rows * cols];
        int count = 0;

        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++) {
                cin >> mat[i][j];
                if (mat[i][j] > 0) {
                    positives[count] = mat[i][j];
                    count++;
                }
            }

        sort(positives, positives + count);

        cout << count << endl;
        for (int i = 0; i < count; i++)
            cout << positives[i] << " ";
    }

    return 0;
}
