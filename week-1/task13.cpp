#include <iostream>
using namespace std;

int main() {
    double x, result = 1.0;
    int count;

    cin >> x >> count;

    for (int k = 0; k < count; k++) {
        result *= (x + k);
    }

    cout << result;
    return 0;
}
