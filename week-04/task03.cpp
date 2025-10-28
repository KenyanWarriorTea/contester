#include <iostream>

using namespace std;

bool myXor(bool a, bool b) {
    if (a && !b) return true;
    if (!a && b) return true;
    return false;
}

int main() {
    bool x, y;
    cin >> x >> y;

    cout << (myXor(x, y) ? 1 : 0);
    return 0;
}
