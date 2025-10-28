#include <iostream>
using namespace std;

int main() {
    double value, result = 0.0;
    int times;

    cin >> value >> times;

    for (int k = 1; k <= times; k++) {
        result += value;
    }

    cout << result;
    return 0;
}
