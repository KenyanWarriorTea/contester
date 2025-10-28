#include <iostream>
using namespace std;

int main() {
    int day, month, year;
    cin >> day >> month >> year;

    if (year <= 0 || month <= 0 || month > 12 || day <= 0) {
        cout << "no";
        return 0;
    }

    bool leap = (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));
    int daysInMonth[12] = {31, (leap ? 29 : 28), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (day <= daysInMonth[month - 1]) cout << "yes";
    else cout << "no";

    return 0;
}
