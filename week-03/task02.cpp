#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int mat[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];

    int sumMain = 0, sumAnti = 0;
    for (int i = 0; i < n; i++) {
        sumMain += mat[i][i];
        sumAnti += mat[i][n - 1 - i];
    }

    cout << sumMain << " " << sumAnti;

    return 0;
}
