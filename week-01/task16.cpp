#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, a;
    int n;

    cin >> x >> a >> n;

    for (int i = 0; i < n; i++) {
        x = (x + a) * (x + a);
    }

    x += a;

    cout << x;

    return 0;
}
