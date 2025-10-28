#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double result = 103.0;

    for (int i = 101; i >= 3; i -= 2) {
        result = (i) + 1.0 / result;
    }

    result = 1.0 / result;

    cout << result;

    return 0;
}
