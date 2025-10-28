#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n >= 1 && n <= 100) {
        int mat[n][n];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> mat[i][j];

        bool symmetric = true;
        for (int i = 0; i < n && symmetric; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] != mat[j][i]) {
                    symmetric = false;
                    break;
                }
            }
        }

        cout << (symmetric ? "YES" : "NO");
    }

    return 0;
}
