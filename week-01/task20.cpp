#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double sum = 0.0;

    for (int k = 1; k <= 50; k++) {
        sum += 1.0 / pow(k, 3);
    }

    cout << sum;

    return 0;
}
