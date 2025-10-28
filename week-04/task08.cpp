#include <iostream>
#include <algorithm>

using namespace std;

void longestSeries(int n, int m) {
    int** matrix = new int*[n];
    for (int i = 0; i < n; i++)
        matrix[i] = new int[m];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> matrix[i][j];

    int maxLength = 0;
    int rowIndex = -1;

    for (int i = 0; i < n; i++) {
        int countSeries = 1;
        int localMax = 1;

        for (int j = 1; j < m; j++) {
            if (matrix[i][j] == matrix[i][j - 1])
                countSeries++;
            else
                countSeries = 1;

            if (countSeries > localMax)
                localMax = countSeries;
        }

        if (localMax > maxLength) {
            maxLength = localMax;
            rowIndex = i;
        }
    }

    if (maxLength > 1)
        cout << "Longest series is in the string " << rowIndex + 1;
    else
        cout << "No series of equal elements";

    for (int i = 0; i < n; i++)
        delete[] matrix[i];
    delete[] matrix;
}

int main() {
    int n, m;
    cin >> n >> m;
    longestSeries(n, m);
    return 0;
}
