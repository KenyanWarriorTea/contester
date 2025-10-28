#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int limit;
    double result = 0.0;

    cin >> limit;

    for (int k = 1; k <= limit; k++) {
        result = sqrt(2.0 + result);
    }

    cout << result;
    return 0;
}
