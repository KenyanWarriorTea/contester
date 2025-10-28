#include <iostream>

using namespace std;

bool majorityBool(bool a, bool b, bool c) {
    if (a == b || a == c) return a;
    return b;
}

int main() {
    bool x, y, z;
    cin >> x >> y >> z;

    cout << majorityBool(x, y, z);

    return 0;
}
