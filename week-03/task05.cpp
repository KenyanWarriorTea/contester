#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n >= 1 && n <= 100) {
        int matA[n][n], matB[n][n], sumMat[n][n];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> matA[i][j];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> matB[i][j];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                sumMat[i][j] = matA[i][j] + matB[i][j];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                cout << sumMat[i][j] << " ";
            cout << endl;
        }
    }

    return 0;
}
