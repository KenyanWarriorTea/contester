#include <iostream>
using namespace std;

int main() {
    int day;
    cin >> day;

    int months[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    while(day > 365) day -= 365;

    int month = 0;
    while(day > months[month]) {
        day -= months[month];
        month++;
    }

    cout << day << " " << month + 1 << endl;

    return 0;
}
