#include <iostream>
#include <cmath>

using namespace std;

double raiseToPower(double base, int exponent) {
    double result = 1;
    for (int i = 0; i < exponent; i++)
        result *= base;
    return result;
}

int main() {
    double a;
    int b;
    cin >> a >> b;
    cout << raiseToPower(a, b);
    return 0;
}
