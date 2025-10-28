#include <iostream>
using namespace std;

int main() {
    int years, weekday = 8;
    cin >> years;

    for (int y = 1; y <= years; y++) {
        bool leap = (y % 400 == 0) || ((y % 4 == 0) && (y % 100 != 0));

        if (leap) {
            weekday -= 2;
            if (weekday == -1) weekday = 6;
            if (weekday == 0) weekday = 7;
        } else {
            weekday--;
            if (weekday <= 0) weekday = 7;
        }
    }

    cout << weekday;
    return 0;
}
