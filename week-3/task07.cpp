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

        int sum = 0;
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++)
                sum += mat[i][j];
        }

        cout << sum;
    }

    return 0;
}
