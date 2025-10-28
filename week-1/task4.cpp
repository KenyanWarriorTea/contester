#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;

    bool leap = (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));
    cout << (leap ? 366 : 365);

    return 0;
}
