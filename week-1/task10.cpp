#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int count;
    double total = 0.0, sum = 0.0;

    cin >> count;

    for (int k = 1; k <= count; k++) {
        sum += sin(k);
        total += 1.0 / sum;
    }

    cout << total;
    return 0;
}
