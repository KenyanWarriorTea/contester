#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int size;
    cin >> size;

    int x[3][1000];
    int sec[2][1000];

    if (size >= 1 && size <= 1000) {
        for (int i = 0; i < size; i++) {
            cin >> x[0][i] >> x[1][i] >> x[2][i];
        }

        for (int i = 0; i < size; i++) {
            sec[0][i] = (x[0][i] * 3600) + (x[1][i] * 60) + x[2][i];
            sec[1][i] = i;
        }

        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (sec[0][j] > sec[0][j + 1]) {
                    swap(sec[0][j], sec[0][j + 1]);
                    swap(sec[1][j], sec[1][j + 1]);
                }
            }
        }

        for (int i = 0; i < size; i++) {
            int idx = sec[1][i];
            cout << x[0][idx] << " " << x[1][idx] << " " << x[2][idx] << endl;
        }
    }

    return 0;
}
