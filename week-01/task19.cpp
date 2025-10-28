#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x;
    cin >> x;

    double result = pow(x, 2);

    if (x != 0) {
        for (int k = 8; k >= 1; k--) {
            result = pow(x, 2) + pow(2.0, k) / result;
        }
    }

    result = x / result;

    cout << result;

    return 0;
}
