#include <iostream>
using namespace std;

int main() {
    int n;
    double a, b, res = 0;

    cin >> a >> n;

    b = a;

    for (int i = 0; i <= n; i++) {
        if (i > 0)
            b = b * (a + i);
        res = res + 1.0 / b;
    }

    cout << res;

    return 0;
}
