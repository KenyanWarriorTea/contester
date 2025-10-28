#include <iostream>

using namespace std;

void printSign(int a, int b) {
    if (a < b) cout << "<";
    else if (a > b) cout << ">";
    else cout << "=";
}

int main() {
    int x, y;
    cin >> x >> y;
    printSign(x, y);
    return 0;
}
