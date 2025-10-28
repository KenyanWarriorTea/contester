#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int binToDec(int size, char* bit) {
    int result = 0;

    for(int i = 0; i < size; i++) {
        int digit = bit[i] - '0';
        result = result * 2 + digit;
    }

    return result;
}

int main() {
    int size;
    char bit[65];

    cin >> size >> bit;

    cout << binToDec(size, bit);

    return 0;
}
