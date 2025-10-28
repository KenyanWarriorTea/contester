#include <iostream>
using namespace std;

int main() {
    double x, numerator = 1, denominator = 1;
    cin >> x;

    int numVals[] = {2, 4, 8, 16, 32, 64};
    int denVals[] = {1, 3, 7, 15, 31, 63};

    for (int i = 0; i < 6; i++) {
        numerator *= (x - numVals[i]);
        denominator *= (x - denVals[i]);
    }

    double result = numerator / denominator;
    cout << result;

    return 0;
}
