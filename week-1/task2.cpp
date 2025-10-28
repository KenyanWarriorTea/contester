#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double p, q, r, d, x1, x2;
    cin >> p >> q >> r;

    d = q * q - 4 * p * r;

    if (d < 0) {
        cout << "no solution";
    } else {
        double s = sqrt(d);
        x1 = (-q + s) / (2 * p);
        x2 = (-q - s) / (2 * p);

        if (x1 == x2)
            cout << x1;
        else
            cout << x1 << " " << x2;
    }

    return 0;
}
