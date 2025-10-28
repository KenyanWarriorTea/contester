#include <iostream>
#include <string>

using namespace std;

int func() {
    int amount0 = 0, amount1 = 0;
    int io = -1;
    string str;
    cin >> str;

    if (str.length() < 7) return -1;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '0') {
            if (io == 0) amount0++;
            else amount0 = 1;
            io = 0;
            amount1 = 0;
        } else {
            if (io == 1) amount1++;
            else amount1 = 1;
            io = 1;
            amount0 = 0;
        }

        if (amount0 == 7 || amount1 == 7) return 1;
    }

    return 0;
}

int main() {
    cout << (func() == 1 ? "YES" : "NO");
    return 0;
}
