#include <iostream>
using namespace std;

int main() {
    int limit;
    double result = 1.0;

    cin >> limit;

    for (int k = 1; k <= limit; k++) {
        result *= (1.0 + 1.0 / (k * k));
    }

    cout << result;
    return 0;
}
