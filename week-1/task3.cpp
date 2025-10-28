#include <iostream>
using namespace std;

int main() {
    float a, b, c, smallest, largest;
    cin >> a >> b >> c;

    if (a + b <= 2 * c) {
        largest = c;
        smallest = (a < b) ? a : b;
    } else {
        smallest = c;
        largest = (a > b) ? a : b;
    }

    cout << smallest << " " << largest;
    return 0;
}
